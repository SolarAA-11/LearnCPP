enable_testing()

add_executable(
  simpleTests
  simpleTests.cpp
)

target_link_libraries(
    simpleTests
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(simpleTests)