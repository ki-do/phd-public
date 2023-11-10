<?xml version="1.0" encoding="UTF-8"?>
<AdapterType Name="ATurntable" Comment="Adapter Interface">
	<Identification Standard="61499-1">
	</Identification>
	<VersionInfo Version="1.0" Author="dorofeev" Date="2021-09-15">
	</VersionInfo>
	<CompilerInfo header="package fb.test;">
	</CompilerInfo>
	<InterfaceList>
		<EventInputs>
			<Event Name="PositionUpd" Type="Event" Comment="Request from Socket">
				<With Var="CurrentPosition"/>
			</Event>
		</EventInputs>
		<EventOutputs>
			<Event Name="NewPosition" Type="Event" Comment="Confirmation from Plug">
				<With Var="Position"/>
			</Event>
		</EventOutputs>
		<InputVars>
			<VarDeclaration Name="CurrentPosition" Type="WORD" Comment="Request Data from Socket"/>
		</InputVars>
		<OutputVars>
			<VarDeclaration Name="Position" Type="WORD" Comment="Confirmation Data from Plug"/>
		</OutputVars>
	</InterfaceList>
	<Service RightInterface="SOCKET" LeftInterface="PLUG" Comment="Adapter Interface">
		<ServiceSequence Name="request_confirm" Comment="">
			<ServiceTransaction>
				<InputPrimitive Interface="SOCKET" Event="REQ" Parameters="REQD"/>
				<OutputPrimitive Interface="PLUG" Event="REQ" Parameters="REQD"/>
			</ServiceTransaction>
			<ServiceTransaction>
				<InputPrimitive Interface="PLUG" Event="CNF" Parameters="CNFD"/>
				<OutputPrimitive Interface="SOCKET" Event="CNF" Parameters="CNFD"/>
			</ServiceTransaction>
		</ServiceSequence>
		<ServiceSequence Name="indication_response" Comment="">
			<ServiceTransaction>
				<InputPrimitive Interface="PLUG" Event="IND" Parameters="INDD"/>
				<OutputPrimitive Interface="SOCKET" Event="IND" Parameters="INDD"/>
			</ServiceTransaction>
			<ServiceTransaction>
				<InputPrimitive Interface="SOCKET" Event="RSP" Parameters="RSPD"/>
				<OutputPrimitive Interface="PLUG" Event="RSP" Parameters="RSPD"/>
			</ServiceTransaction>
		</ServiceSequence>
	</Service>
</AdapterType>
