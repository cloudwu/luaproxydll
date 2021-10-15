#define LUA_LIB
#include <lua.h>
#include <lauxlib.h>

static int
ltest(lua_State *L) {
	lua_pushstring(L, "Hello World");
	return 1;
}

LUAMOD_API int
luaopen_testlib(lua_State *L) {
	luaL_checkversion(L);
	luaL_Reg l[] = {
		{ "test", ltest },
		{ NULL, NULL },
	};
	luaL_newlib(L, l);
	return 1;
}
