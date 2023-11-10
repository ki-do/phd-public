<?xml version="1.0" encoding="UTF-8"?>
<AdapterType Name="IAS_Skill" Comment="">
	<Identification Standard="61499-1">
	</Identification>
	<VersionInfo Organization="4DIAC-Consortium" Version="0.0" Author="GE" Date="2008-04-22">
	</VersionInfo>
	<InterfaceList>
		<EventInputs>
			<Event Name="RSP" Type="Event" Comment="">
				<With Var="currentState"/>
				<With Var="lastTransition"/>
			</Event>
		</EventInputs>
		<EventOutputs>
			<Event Name="cleanUp" Type="Event" Comment="">
			</Event>
			<Event Name="lock" Type="Event" Comment="">
			</Event>
			<Event Name="reset" Type="Event" Comment="">
			</Event>
			<Event Name="start" Type="Event" Comment="">
			</Event>
			<Event Name="stop" Type="Event" Comment="">
			</Event>
			<Event Name="suspend" Type="Event" Comment="">
			</Event>
			<Event Name="unsuspend" Type="Event" Comment="">
			</Event>
		</EventOutputs>
		<InputVars>
			<VarDeclaration Name="currentState" Type="STRING" Comment=""/>
			<VarDeclaration Name="lastTransition" Type="STRING" Comment=""/>
		</InputVars>
	</InterfaceList>
	<Service RightInterface="PLUG" LeftInterface="SOCKET" Comment="">
		<ServiceSequence Name="normal_operation" Comment="">
			<ServiceTransaction>
				<InputPrimitive Interface="PLUG" Event="start" Parameters=""/>
				<OutputPrimitive Interface="SOCKET" Event="start" Parameters=""/>
			</ServiceTransaction>
			<ServiceTransaction>
				<InputPrimitive Interface="SOCKET" Event="RSP" Parameters="currentState=&quot;Executing&quot;"/>
				<OutputPrimitive Interface="PLUG" Event="RSP" Parameters="currentState=&quot;Executing&quot;"/>
			</ServiceTransaction>
			<ServiceTransaction>
				<InputPrimitive Interface="SOCKET" Event="RSP" Parameters="currentState=&quot;Idle&quot;"/>
				<OutputPrimitive Interface="PLUG" Event="RSP" Parameters="currentState=&quot;Idle&quot;"/>
			</ServiceTransaction>
		</ServiceSequence>
		<ServiceSequence Name="indication_response" Comment="">
		</ServiceSequence>
		<ServiceSequence Name="error_handling" Comment="should be executed if an error occurs">
			<ServiceTransaction>
				<InputPrimitive Interface="PLUG" Event="reset"/>
				<OutputPrimitive Interface="SOCKET" Event="reset"/>
			</ServiceTransaction>
			<ServiceTransaction>
				<InputPrimitive Interface="SOCKET" Event="RSP" Parameters="currentState=&quot;Idle&quot;"/>
				<OutputPrimitive Interface="PLUG" Event="RSP" Parameters="currentState=&quot;Idle&quot;"/>
			</ServiceTransaction>
		</ServiceSequence>
		<ServiceSequence Name="error_signal" Comment="">
			<ServiceTransaction>
				<InputPrimitive Interface="SOCKET" Event="RSP" Parameters="currentState=&quot;Locked&quot;"/>
				<OutputPrimitive Interface="PLUG" Event="RSP" Parameters="currentState=&quot;Locked&quot;"/>
			</ServiceTransaction>
		</ServiceSequence>
	</Service>
</AdapterType>
