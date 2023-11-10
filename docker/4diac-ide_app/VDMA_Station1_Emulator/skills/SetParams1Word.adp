<?xml version="1.0" encoding="UTF-8"?>
<AdapterType Name="SetParams1Word" Comment="Adapter Interface">
	<Identification Standard="61499-1">
	</Identification>
	<VersionInfo Version="1.0" Author="dorofeev" Date="2021-10-04">
	</VersionInfo>
	<CompilerInfo header="package fb.test;">
	</CompilerInfo>
	<InterfaceList>
		<EventOutputs>
			<Event Name="IND" Type="Event" Comment="Indication from Plug">
				<With Var="DATA"/>
			</Event>
		</EventOutputs>
		<OutputVars>
			<VarDeclaration Name="DATA" Type="WORD" Comment="Indication Data from Plug"/>
		</OutputVars>
	</InterfaceList>
	<Service RightInterface="SOCKET" LeftInterface="PLUG" Comment="Adapter Interface">
		<ServiceSequence Name="normal_operation" Comment="">
			<ServiceTransaction>
				<InputPrimitive Interface="PLUG" Event="IND" Parameters="DATA=1"/>
				<OutputPrimitive Interface="SOCKET" Event="IND" Parameters="DATA=1"/>
			</ServiceTransaction>
		</ServiceSequence>
		<ServiceSequence Name="indication_response" Comment="">
		</ServiceSequence>
	</Service>
</AdapterType>
