add_executable(inherited_members
inherited_members.cpp)

add_subdirectory(FrozenFood)

target_link_libraries(inherited_members PRIVATE frozen_food)