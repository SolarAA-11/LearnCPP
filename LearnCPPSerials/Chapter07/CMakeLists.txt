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

add_executable(globalVariableAcrossFiles
    globalVariableAcrossFiles-A.cpp
    globalVariableAcrossFiles-Main.cpp)

add_executable(constantGlobalVariable
    constantGlobalVariable-Main.cpp
)

add_executable(externalLinkageConstantGlobalVariable
    externalLinkageConstantGlobalVariable-A.cpp
    externalLinkageConstantGlobalVariable-Main.cpp
)

add_executable(inlineGlobalConstant
    inlineGlobalConstant-A.cpp
    inlineGlobalConstant-Main.cpp)
