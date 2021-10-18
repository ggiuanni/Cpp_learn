add_library(car_part
car_part.cpp)

add_library(mediator
mediator.cpp)

target_include_directories(car_part PUBLIC includes)
target_include_directories(mediator PUBLIC includes)