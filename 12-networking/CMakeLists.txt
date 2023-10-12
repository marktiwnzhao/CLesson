link_libraries(ws2_32 wsock32)
add_executable(uc-server uppercase/uc-server.c)
add_executable(uc-client uppercase/uc-client.c)
add_executable(networking_win networking_win.c)
