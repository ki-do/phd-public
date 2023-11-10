import xml.etree.ElementTree as ET
import math

tree = ET.parse("VDMA_Station1_Emulator.sys")
root = tree.getroot()

apps = root.findall("Application")
connectionsources = set()
fbnames = set()

for app in apps:
    connections = app.findall('.//Connection')
    for conn in connections:
        connectionsources.add(conn.attrib['Source'])
    fbs = app.findall('.//FB')
    for fb in fbs:
        fbnames.add(fb.attrib['Type'])
    print(app.attrib['Name'])
    N1 = len(connections)
    n1 = len(connectionsources)
    N2 = len(fbs)
    n2 = len(fbnames)
    print("N1 all operands = " + str(N1) + " n1 unique operands =  " + str(n1)+ " N2 all operators =  " + str(N2) + " n2 unique operators =  " + str(n2))
    diff = n1/2 + N2/n2
    volume = N1 + N2 * math.log2(n1+n2)
    effort = diff * volume
    print("FB Reusability = " + str(N2/n2) + ", Difficulty = " + str(diff) + ", Volume = ", str(volume) + ", Effort = ", str(effort))
    print("\n")
    connectionsources.clear()
    fbnames.clear()