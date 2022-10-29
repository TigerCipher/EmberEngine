add_executable(Sandbox main.cpp)
target_include_directories(Sandbox PRIVATE ../Ember/src)
add_compile_definitions(_DEBUG EMBER_IMPORT E_WINDOWS)
target_link_libraries(Sandbox Ember)