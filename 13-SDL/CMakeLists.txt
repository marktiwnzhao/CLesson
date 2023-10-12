add_executable(Example Example.c)

target_link_libraries(Example mingw32)
target_link_libraries(Example SDL2main)
target_link_libraries(Example SDL2)
target_link_libraries(Example SDL2_image)
target_link_libraries(Example SDL2_ttf)
