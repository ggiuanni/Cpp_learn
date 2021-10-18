add_executable(singleton
singleton.cpp)

add_subdirectory(questionnary)
target_link_libraries(singleton PRIVATE questionnary)

add_executable(observer1
observer1.cpp)
add_subdirectory(observer_base)
target_link_libraries(observer1 PRIVATE observer_base)

add_executable(observer2
observer2.cpp)
add_subdirectory(observer_auto)
target_link_libraries(observer2 PRIVATE observer_auto)

add_executable(drive_car
drive_car.cpp)
add_subdirectory(mediator)
target_link_libraries(drive_car PRIVATE mediator car_part)