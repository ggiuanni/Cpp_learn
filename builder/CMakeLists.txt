add_library(html_element
html_element.cpp)

add_executable(builder_pattern
simple_builder.cpp)

target_link_libraries(builder_pattern PRIVATE html_element)

