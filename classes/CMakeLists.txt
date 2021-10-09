# PEN CLASS

add_executable(pen_class
pen_class.cpp)

add_subdirectory(pen)

target_include_directories(pen_class PRIVATE pen/includes)
target_link_libraries(pen_class PRIVATE pen)

# OVEN CLASS

add_executable(oven_class
oven_class.cpp)

add_subdirectory(oven)

target_include_directories(oven_class PRIVATE oven/includes)
target_link_libraries(oven_class PRIVATE oven)

# DOOR CLASS

add_executable(door_class
door_class.cpp)

add_subdirectory(door)

target_include_directories(door_class PRIVATE door/includes)
target_link_libraries(door_class PRIVATE door)

# SQUIRREL CLASS

add_executable(squirrel_class
squirrel_class.cpp)

add_subdirectory(squirrel)

target_include_directories(squirrel_class PRIVATE squirrel/includes)
target_link_libraries(squirrel_class PRIVATE squirrel)

# VEHICLE CLASS

add_executable(vehicle_class
vehicle_class.cpp)

add_subdirectory(vehicle)

target_include_directories(vehicle_class PRIVATE vehicle/includes)
target_link_libraries(vehicle_class PRIVATE vehicle)