add_executable(singleton
singleton.cpp)

add_subdirectory(questionnary)

target_link_libraries(singleton PRIVATE questionnary)