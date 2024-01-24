extern "C" {
#define MAKE_LIB
#include "onelua.c"
}

#include "lualib.h"
#include "lauxlib.h"
#include "lua.h"

const char *code = R"POGGERS(
print("hello");
print("world");
)POGGERS";

int main(int argc, char **argv)
{
    lua_State *L = luaL_newstate();  /* create state */
    luaL_openlibs(L);
    luaL_dostring(L, code);
    lua_close(L);
    return 0;
}