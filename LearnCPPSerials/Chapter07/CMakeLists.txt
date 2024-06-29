add_executable(internalLinkGlobalVariable
    internalLinkGlobalVariable-A.cpp
    internalLinkGlobalVariable-Main.cpp
)

add_executable(internalLinkFunction
    internalLinkFunction-A.cpp
    internalLinkFunction-Main.cpp
)

add_executable(internalLinkForODR
    internalLinkForODR-A.cpp
    internalLinkForODR-Main.cpp
)

add_executable(externalLinkForFunction
    externalLinkForFunction-A.cpp
    externalLinkForFunction-Main.cpp)

add_executable(externalLinkForGlobalVariable
    externalLinkForGlobalVariable-A.cpp
    externalLinkForGlobalVariable-Main.cpp
)

add_executable(staticDynamicInitGlobalVariable
    staticDynamicInitGlobalVariable.cpp
)
