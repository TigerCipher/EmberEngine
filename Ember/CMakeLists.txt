
set(SRC_DIR src/ember)

add_library(Ember SHARED ${SRC_DIR}/ember.h src/ember/ember.cpp)

if(WIN32)
    target_include_directories(Ember PRIVATE $ENV{VULKAN_SDK}/Include)
    target_link_directories(Ember PUBLIC $ENV{VULKAN_SDK}/Lib)
    target_link_libraries(Ember vulkan-1)
    add_compile_definitions(_DEBUG EMBER_EXPORT _CRT_SECURE_NO_WARNINGS E_WINDOWS)
endif(WIN32)