import sys
sys.path.insert(0, "..")
import logging
import time

try:
    from IPython import embed
except ImportError:
    import code

    def embed():
        vars = globals()
        vars.update(locals())
        shell = code.InteractiveConsole(vars)
        shell.interact()


from opcua import Client
from opcua import ua

def write_and_wait(write_node, write_value, read_node, name):
    try:
        while True:
            if isinstance(write_value, bool):
                write_node.set_value(write_value, varianttype=ua.VariantType.Boolean)
            elif isinstance(write_value, int):
                write_node.set_value(write_value, varianttype=ua.VariantType.Int32)
            else:
                print("Unsupported data type for write_value")

            while True:
                read_value = read_node.get_value()
                if read_value != write_value:
                    break
                else:
                    print(name + " new value is: " + str(write_value))
                time.sleep(1)  
                return
    except KeyboardInterrupt:
        print("Execution interrupted by the user.")


logging.basicConfig(level=logging.WARN)
client = Client("opc.tcp://localhost:4840/")
client.connect()
client.load_type_definitions()  

root = client.get_root_node()
print("Children of root are: ", root.get_children())
idx = 1

gripper_grip = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Gripper1.Grip".format(idx)])
gripper_gripped = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Gripper1.Gripped".format(idx)])
table_curpos = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:InnerTable.CurrentPosition".format(idx)])
table_setpos = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:InnerTable.PresetPosition".format(idx)])
robot_curpos = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Robot.CurrentPosition".format(idx)])
robot_setpos = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Robot.PresetPosition".format(idx)])
storage_goin = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.GoMagazinIn".format(idx)])
storage_goout = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.GoMagazinOut".format(idx)])
storage_isin = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.MagazinIn".format(idx)])
storage_isout = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.MagazinOut".format(idx)])
storage_part1 = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.Part1In".format(idx)])
storage_part2 = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.Part2In".format(idx)])
storage_part3 = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.Part3In".format(idx)])
storage_part4 = root.get_child(["0:Objects", "{}:IOs".format(idx), "{}:Storage.Part4In".format(idx)])

write_and_wait(storage_goout, True, storage_isout, "Storage.GoMagazinOut")
storage_goout.set_value(False)
write_and_wait(storage_goin, True, storage_isin, "Storage.GoMagazinIn")
write_and_wait(table_setpos, 3, table_curpos, "InnerTable.CurrentPosition")
storage_goin.set_value(False)
write_and_wait(storage_goout, True, storage_isout, "Storage.GoMagazinOut")
write_and_wait(gripper_grip, False, gripper_gripped, "Gripper1.Gripped")
write_and_wait(table_setpos, 1, table_curpos, "InnerTable.CurrentPosition")
write_and_wait(gripper_grip, True, gripper_gripped, "Gripper1.Gripped")
write_and_wait(robot_setpos, 11, robot_curpos, "Robot.CurrentPosition")
write_and_wait(gripper_grip, False, gripper_gripped, "Gripper1.Gripped")
write_and_wait(table_setpos, 2, table_curpos, "InnerTable.CurrentPosition")
write_and_wait(gripper_grip, True, gripper_gripped, "Gripper1.Gripped")
write_and_wait(robot_setpos, 12, robot_curpos, "Robot.CurrentPosition")
write_and_wait(gripper_grip, False, gripper_gripped, "Gripper1.Gripped")
write_and_wait(table_setpos, 3, table_curpos, "InnerTable.CurrentPosition")
write_and_wait(gripper_grip, True, gripper_gripped, "Gripper1.Gripped")
write_and_wait(robot_setpos, 13, robot_curpos, "Robot.CurrentPosition")
write_and_wait(gripper_grip, False, gripper_gripped, "Gripper1.Gripped")
write_and_wait(table_setpos, 4, table_curpos, "InnerTable.CurrentPosition")
write_and_wait(gripper_grip, True, gripper_gripped, "Gripper1.Gripped")
write_and_wait(robot_setpos, 14, robot_curpos, "Robot.CurrentPosition")
write_and_wait(gripper_grip, False, gripper_gripped, "Gripper1.Gripped")
write_and_wait(robot_setpos, 99, robot_curpos, "Robot.CurrentPosition")

client.disconnect()
