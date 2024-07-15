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


add_executable(scopeResolutionOperator 
                scopeResolutionOperator.cpp 
                scopeResolutionOperatorFoo.cpp 
                scopeResolutionOperatorBoo.cpp)

add_executable(nestedNamespace nestedNamespace.cpp)
add_executable(namespaceAliases namespaceAliases.cpp)
add_executable(blockscope blockscope.cpp)
add_executable(localVariableUnique localVariableUnique.cpp)
add_executable(automaticLocalVariable automaticLocalVariable.cpp)
add_executable(largerSmallerInput largerSmallerInput.cpp)
add_executable(globalVariable globalVariable.cpp)


