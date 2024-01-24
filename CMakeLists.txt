project(luatest CXX)
file(GLOB SOURCES *.cpp *.h)
add_executable(luatest ${SOURCES})
target_include_directories(luatest PRIVATE dep/lua)