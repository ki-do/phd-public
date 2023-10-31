# Use Ubuntu as base image
FROM ubuntu:latest

RUN apt-get update && apt-get install -y\ 
    python-setuptools git gcc g++ cmake make python3 net-tools
RUN mkdir /home/4diac && cd /home/4diac && \
    git clone https://git.eclipse.org/r/4diac/org.eclipse.4diac.forte forte
RUN cd /home/4diac/forte	
ADD ext_module /home/4diac/forteextmodules
RUN cd /home/4diac && \
    git clone https://github.com/open62541/open62541.git open62541
RUN cd /home/4diac/open62541 && git checkout tags/v1.0 && git submodule update --init --recursive
RUN mkdir /home/4diac/open62541/build 
WORKDIR "/home/4diac/open62541/build"
RUN cmake -DBUILD_SHARED_LIBS=OFF -DCMAKE_BUILD_TYPE=RelWithDebInfo -DUA_ENABLE_AMALGAMATION=ON -DUA_NAMESPACE_ZERO=FULL -DPYTHON_EXECUTABLE=/usr/bin/python3 -DUA_ARCHITECTURE='posix' ..
RUN make -j
RUN make install
RUN ls /home/4diac
RUN mkdir /home/4diac/forte/build
WORKDIR "/home/4diac/forte/build"
RUN cmake -DCMAKE_BUILD_TYPE=Debug -DFORTE_ARCHITECTURE=Posix -DFORTE_COM_ETH=ON -DFORTE_COM_FBDK=ON -DFORTE_COM_LOCAL=ON -DFORTE_COM_RAW=ON -DFORTE_LOGLEVEL=Debug  -DFORTE_BUILD_EXECUTABLE=ON -DFORTE_EXTERNAL_MODULES_DIRECTORY=/home/4diac/forteextmodules -DFORTE_MODULE_CONVERT=ON  -DFORTE_MODULE_IEC61131=ON -DFORTE_MODULE_EXAMPLE_FBs=ON -DFORTE_MODULE_UTILS=ON -DFORTE_COM_OPC_UA=ON -DFORTE_COM_OPC_UA_INCLUDE_DIR=/home/4diac/open62541/build  -DFORTE_COM_OPC_UA_LIB_DIR=/home/4diac/open62541/build/bin -DFORTE_COM_OPC_UA_LIB=libopen62541.a  -DFORTE_COM_OPC_UA_SERVER_PUB_INTERVAL=25.0 -DFORTE_COM_OPC_UA_CLIENT_PUB_INTERVAL=25.0 -DFORTE_USE_LREAL_DATATYPE=ON -DFORTE_EventChainExternalEventListSize=50 ..
RUN make -j 
RUN make install

RUN ifconfig -a

EXPOSE 61499
EXPOSE 61500
EXPOSE 61501
EXPOSE 61502
EXPOSE 61503
EXPOSE 61504
EXPOSE 61505
EXPOSE 61515
EXPOSE 4840
  
RUN ls -l /home/4diac/forteextmodules
RUN date
  