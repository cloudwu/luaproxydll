#define LUA_LIB

#include <lua.h>
#include <lauxlib.h>
#include <stdio.h>

#include "luaapi.h"

static struct luaapi_export *apis = NULL;
#define API(name) apis->name

LUA_API lua_State *
lua_newstate (lua_Alloc f, void *ud) {
	return API(lua_newstate)(f, ud);
}

LUA_API	void
lua_close (lua_State *L) {
	API(lua_close)(L);
}

LUA_API	lua_State *
lua_newthread (lua_State *L) {
	return API(lua_newthread)(L);
}

LUA_API	int
lua_resetthread(lua_State *L) {
	return API(lua_resetthread)(L);
}

LUA_API lua_CFunction
lua_atpanic (lua_State *L, lua_CFunction panicf) {
	return API(lua_atpanic)(L, panicf);
}

LUA_API lua_Number
lua_version (lua_State *L) {
	return API(lua_version)(L);
}

LUA_API	int
lua_absindex (lua_State *L, int idx) {
	return API(lua_absindex)(L, idx);
}

LUA_API int
lua_gettop (lua_State *L) {
	return API(lua_gettop)(L);
}

LUA_API	void
lua_settop (lua_State *L, int idx) {
	API(lua_settop)(L, idx);
}

LUA_API	void
lua_pushvalue (lua_State *L, int idx) {
	API(lua_pushvalue)(L, idx);
}

LUA_API	void
lua_rotate (lua_State *L, int idx, int n) {
	API(lua_rotate)(L, idx, n);
}

LUA_API void
lua_copy (lua_State *L, int fromidx, int toidx) {
	API(lua_copy)(L, fromidx, toidx);
}

LUA_API int
lua_checkstack (lua_State *L, int n) {
	return API(lua_checkstack)(L, n);
}

LUA_API void
lua_xmove (lua_State *from, lua_State *to, int n) {
	API(lua_xmove)(from, to, n);
}

LUA_API int
lua_isnumber (lua_State *L, int idx) {
	return API(lua_isnumber)(L, idx);
}

LUA_API	int
lua_isstring (lua_State *L, int idx) {
	return API(lua_isstring)(L, idx);
}

LUA_API	int
lua_iscfunction (lua_State *L, int idx) {
	return API(lua_iscfunction)(L, idx);
}

LUA_API int
lua_isinteger (lua_State *L, int idx) {
	return API(lua_isinteger)(L, idx);
}

LUA_API int
lua_isuserdata (lua_State *L, int idx) {
	return API(lua_isuserdata)(L, idx);
}

LUA_API int
lua_type (lua_State *L, int idx) {
	return API(lua_type)(L, idx);
}

LUA_API	const char *
lua_typename (lua_State *L, int tp) {
	return API(lua_typename)(L, tp);
}

LUA_API lua_Number
lua_tonumberx (lua_State *L, int idx, int *isnum) {
	return API(lua_tonumberx)(L, idx, isnum);
}

LUA_API lua_Integer
lua_tointegerx (lua_State *L, int idx, int *isnum) {
	return API(lua_tointegerx)(L, idx, isnum);
}

LUA_API	int
lua_toboolean (lua_State *L, int idx) {
	return API(lua_toboolean)(L, idx);
}

LUA_API	const char *
lua_tolstring (lua_State *L, int idx, size_t *len) {
	return API(lua_tolstring)(L, idx, len);
}

LUA_API lua_Unsigned
lua_rawlen (lua_State *L, int idx) {
	return API(lua_rawlen)(L, idx);
}

LUA_API lua_CFunction
lua_tocfunction (lua_State *L, int idx) {
	return API(lua_tocfunction)(L, idx);
}

LUA_API void *
lua_touserdata (lua_State *L, int idx) {
	return API(lua_touserdata)(L, idx);
}

LUA_API lua_State *
lua_tothread (lua_State *L, int idx) {
	return API(lua_tothread)(L, idx);
}

LUA_API const void *
lua_topointer (lua_State *L, int idx) {
	return API(lua_topointer)(L, idx);
}

LUA_API	void
lua_arith (lua_State *L, int op) {
	API(lua_arith)(L, op);
}

LUA_API	int
lua_rawequal (lua_State *L, int idx1, int idx2) {
	return API(lua_rawequal)(L, idx1, idx2);
}

LUA_API int
lua_compare (lua_State *L, int idx1, int idx2, int op) {
	return API(lua_compare)(L, idx1, idx2, op);
}

LUA_API void
lua_pushnil (lua_State *L) {
	API(lua_pushnil)(L);
}

LUA_API	void
lua_pushnumber (lua_State *L, lua_Number n) {
	API(lua_pushnumber)(L, n);
}

LUA_API	void
lua_pushinteger (lua_State *L, lua_Integer n) {
	API(lua_pushinteger)(L, n);
}

LUA_API const char *
lua_pushlstring (lua_State *L, const char *s, size_t len) {
	return API(lua_pushlstring)(L, s, len);
}

LUA_API	const char *
lua_pushstring (lua_State *L, const char *s) {
	return API(lua_pushstring)(L, s);
}

LUA_API const char *
lua_pushvfstring (lua_State *L, const char *fmt, va_list argp) {
	return API(lua_pushvfstring)(L, fmt, argp);
}

LUA_API	const char *
lua_pushfstring (lua_State *L, const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	const char * ret = API(lua_pushvfstring)(L, fmt, ap);
	va_end(ap);
	return ret;
}

LUA_API void
lua_pushcclosure (lua_State *L, lua_CFunction fn, int n) {
	API(lua_pushcclosure)(L, fn, n);
}

LUA_API void
lua_pushboolean (lua_State *L, int b) {
	API(lua_pushboolean)(L, b);
}

LUA_API void
lua_pushlightuserdata (lua_State *L, void *p) {
	API(lua_pushlightuserdata)(L, p);
}

LUA_API int
lua_pushthread (lua_State *L) {
	return API(lua_pushthread)(L);
}

LUA_API int
lua_getglobal (lua_State *L, const char *name) {
	return API(lua_getglobal)(L, name);
}

LUA_API int
lua_gettable (lua_State *L, int idx) {
	return API(lua_gettable)(L, idx);
}

LUA_API int
lua_getfield (lua_State *L, int idx, const char *k) {
	return API(lua_getfield)(L, idx, k);
}

LUA_API int
lua_geti (lua_State *L, int idx, lua_Integer n) {
	return API(lua_geti)(L, idx, n);
}

LUA_API int
lua_rawget (lua_State *L, int idx) {
	return API(lua_rawget)(L, idx);
}

LUA_API	int
lua_rawgeti (lua_State *L, int idx, lua_Integer n) {
	return API(lua_rawgeti)(L, idx, n);
}

LUA_API int
lua_rawgetp (lua_State *L, int idx, const void *p) {
	return API(lua_rawgetp)(L, idx, p);
}

LUA_API void
lua_createtable (lua_State *L, int narr, int nrec) {
	API(lua_createtable)(L, narr, nrec);
}

LUA_API	void *
lua_newuserdatauv (lua_State *L, size_t sz, int nuvalue) {
	return API(lua_newuserdatauv)(L, sz, nuvalue);
}

LUA_API int
lua_getmetatable (lua_State *L, int objindex) {
	return API(lua_getmetatable)(L, objindex);
}

LUA_API int
lua_getiuservalue (lua_State *L, int idx, int n) {
	return API(lua_getiuservalue)(L, idx, n);
}

LUA_API void
lua_setglobal (lua_State *L, const char *name) {
	API(lua_setglobal)(L, name);
}

LUA_API void
lua_settable (lua_State *L, int idx) {
	API(lua_settable)(L, idx);
}

LUA_API void
lua_setfield (lua_State *L, int idx, const char *k) {
	API(lua_setfield)(L, idx, k);
}

LUA_API void
lua_seti (lua_State *L, int idx, lua_Integer n) {
	API(lua_seti)(L, idx, n);
}

LUA_API void
lua_rawset (lua_State *L, int idx) {
	API(lua_rawset)(L, idx);
}

LUA_API	void
lua_rawseti (lua_State *L, int idx, lua_Integer n) {
	API(lua_rawseti)(L, idx, n);
}

LUA_API	void
lua_rawsetp (lua_State *L, int idx, const void *p) {
	API(lua_rawsetp)(L, idx, p);
}

LUA_API int
lua_setmetatable (lua_State *L, int objindex) {
	return API(lua_setmetatable)(L, objindex);
}

LUA_API	int
lua_setiuservalue (lua_State *L, int idx, int n) {
	return API(lua_setiuservalue)(L, idx, n);
}

LUA_API	void
lua_callk (lua_State *L, int nargs, int nresults,
                           lua_KContext ctx, lua_KFunction k) {
	API(lua_callk)(L, nargs, nresults, ctx, k);
}

LUA_API int
lua_pcallk (lua_State *L, int nargs, int nresults, int errfunc,
                            lua_KContext ctx, lua_KFunction k) {
	return API(lua_pcallk)(L, nargs, nresults, errfunc, ctx, k);
}

LUA_API int
lua_load (lua_State *L, lua_Reader reader, void *dt,
                          const char *chunkname, const char *mode) {
	return API(lua_load)(L, reader, dt, chunkname, mode);
}

LUA_API int
lua_dump (lua_State *L, lua_Writer writer, void *data, int strip) {
	return API(lua_dump)(L, writer, data, strip);
}

LUA_API int
lua_yieldk     (lua_State *L, int nresults, lua_KContext ctx,
                               lua_KFunction k) {
	return API(lua_yieldk)(L, nresults, ctx, k);
}

LUA_API int
lua_resume     (lua_State *L, lua_State *from, int narg,
                               int *nres) {
	return API(lua_resume)(L, from, narg, nres);
}

LUA_API int
lua_status     (lua_State *L) {
	return API(lua_status)(L);
}

LUA_API int
lua_isyieldable (lua_State *L) {
	return API(lua_isyieldable)(L);
}

LUA_API void
lua_setwarnf (lua_State *L, lua_WarnFunction f, void *ud) {
	API(lua_setwarnf)(L, f, ud);
}

LUA_API void
lua_warning  (lua_State *L, const char *msg, int tocont) {
	API(lua_warning)(L, msg, tocont);
}

LUA_API	int
lua_gc (lua_State *L, int what, ...) {
	int ret;
	va_list argp;
	va_start(argp, what);
	switch (what) {
	case LUA_GCSTEP:
	case LUA_GCSETPAUSE:
	case LUA_GCSETSTEPMUL:
		ret = API(lua_gc)(L, what, va_arg(argp, int));
		break;
	case LUA_GCGEN:
		ret = API(lua_gc)(L, what, va_arg(argp, int), va_arg(argp, int));
		break;
	case LUA_GCINC:
		ret = API(lua_gc)(L, what, va_arg(argp, int), va_arg(argp, int), va_arg(argp, int));
		break;
	default:
		ret = API(lua_gc)(L, what);
		break;
	}
	va_end(argp);
	return ret;
}

LUA_API int
lua_error (lua_State *L) {
	return API(lua_error)(L);
}

LUA_API int
lua_next (lua_State *L, int idx) {
	return API(lua_next)(L, idx);
}

LUA_API void
lua_concat (lua_State *L, int n) {
	API(lua_concat)(L, n);
}

LUA_API	void
lua_len    (lua_State *L, int idx) {
	API(lua_len)(L, idx);
}

LUA_API	size_t
lua_stringtonumber (lua_State *L, const char *s) {
	return API(lua_stringtonumber)(L, s);
}

LUA_API	lua_Alloc
lua_getallocf (lua_State *L, void **ud) {
	return API(lua_getallocf)(L, ud);
}

LUA_API	void
lua_setallocf (lua_State *L, lua_Alloc f, void *ud) {
	API(lua_setallocf)(L, f, ud);
}

LUA_API	void
lua_toclose (lua_State *L, int idx) {
	API(lua_toclose)(L, idx);
}

LUA_API void
lua_closeslot (lua_State *L, int idx) {
	API(lua_closeslot)(L, idx);
}

LUA_API	int
lua_getstack (lua_State *L, int level, lua_Debug *ar) {
	return API(lua_getstack)(L, level, ar);
}

LUA_API	int
lua_getinfo (lua_State *L, const char *what, lua_Debug *ar) {
	return API(lua_getinfo)(L, what, ar);
}

LUA_API const char *
lua_getlocal (lua_State *L, const lua_Debug *ar, int n) {
	return API(lua_getlocal)(L, ar, n);
}

LUA_API	const char *
lua_setlocal (lua_State *L, const lua_Debug *ar, int n) {
	return API(lua_setlocal)(L, ar, n);
}

LUA_API	const char *
lua_getupvalue (lua_State *L, int funcindex, int n) {
	return API(lua_getupvalue)(L, funcindex, n);
}

LUA_API	const char *
lua_setupvalue (lua_State *L, int funcindex, int n) {
	return API(lua_setupvalue)(L, funcindex, n);
}

LUA_API void *
lua_upvalueid (lua_State *L, int fidx, int n) {
	return API(lua_upvalueid)(L, fidx, n);
}

LUA_API void
lua_upvaluejoin (lua_State *L, int fidx1, int n1,
	                                       int fidx2, int n2) {
	API(lua_upvaluejoin)(L, fidx1, n1, fidx2, n2);
}

LUA_API void
lua_sethook (lua_State *L, lua_Hook func, int mask, int count) {
	API(lua_sethook)(L, func, mask, count);
}

LUA_API	lua_Hook
lua_gethook (lua_State *L) {
	return API(lua_gethook)(L);
}

LUA_API int
lua_gethookmask (lua_State *L) {
	return API(lua_gethookmask)(L);
}

LUA_API int
lua_gethookcount (lua_State *L) {
	return API(lua_gethookcount)(L);
}

LUA_API int
lua_setcstacklimit (lua_State *L, unsigned int limit) {
	return API(lua_setcstacklimit)(L, limit);
}

LUA_API void
luaL_checkversion_ (lua_State *L, lua_Number ver, size_t sz) {
	API(luaL_checkversion_)(L, ver, sz);
}

LUA_API int
luaL_getmetafield (lua_State *L, int obj, const char *e) {
	return API(luaL_getmetafield)(L, obj, e);
}

LUA_API int
luaL_callmeta (lua_State *L, int obj, const char *e) {
	return API(luaL_callmeta)(L, obj, e);
}

LUA_API	const char *
luaL_tolstring (lua_State *L, int idx, size_t *len) {
	return API(luaL_tolstring)(L, idx, len);
}

LUA_API int
luaL_argerror (lua_State *L, int arg, const char *extramsg) {
	return API(luaL_argerror)(L, arg, extramsg);
}

LUA_API int
luaL_typeerror (lua_State *L, int arg, const char *tname) {
	return API(luaL_typeerror)(L, arg, tname);
}

LUA_API const char *
luaL_checklstring (lua_State *L, int arg, size_t *l) {
	return API(luaL_checklstring)(L, arg, l);
}

LUA_API const char *
luaL_optlstring (lua_State *L, int arg,
	                               const char *def, size_t *l) {
	return API(luaL_optlstring)(L, arg, def, l);
}

LUA_API lua_Number
luaL_checknumber (lua_State *L, int arg) {
	return API(luaL_checknumber)(L, arg);
}

LUA_API lua_Number
luaL_optnumber (lua_State *L, int arg, lua_Number def) {
	return API(luaL_optnumber)(L, arg, def);
}

LUA_API lua_Integer
luaL_checkinteger (lua_State *L, int arg) {
	return API(luaL_checkinteger)(L, arg);
}

LUA_API lua_Integer
luaL_optinteger (lua_State *L, int arg, lua_Integer def) {
	return API(luaL_optinteger)(L, arg, def);
}

LUA_API void
luaL_checkstack (lua_State *L, int sz, const char *msg) {
	API(luaL_checkstack)(L, sz, msg);
}

LUA_API	void
luaL_checktype (lua_State *L, int arg, int t) {
	API(luaL_checktype)(L, arg, t);
}

LUA_API void
luaL_checkany (lua_State *L, int arg) {
	API(luaL_checkany)(L, arg);
}

LUA_API int
luaL_newmetatable (lua_State *L, const char *tname) {
	return API(luaL_newmetatable)(L, tname);
}

LUA_API void
luaL_setmetatable (lua_State *L, const char *tname) {
	API(luaL_setmetatable)(L, tname);
}

LUA_API void *
luaL_testudata (lua_State *L, int ud, const char *tname) {
	return API(luaL_testudata)(L, ud, tname);
}

LUA_API void *
luaL_checkudata (lua_State *L, int ud, const char *tname) {
	return API(luaL_checkudata)(L, ud, tname);
}

LUA_API void
luaL_where (lua_State *L, int lvl) {
	API(luaL_where)(L, lvl);
}

LUA_API int
luaL_error (lua_State *L, const char *fmt, ...) {
	va_list argp;
	va_start(argp, fmt);
	API(luaL_where)(L, 1);
	API(lua_pushvfstring)(L, fmt, argp);
	va_end(argp);
	API(lua_concat)(L, 2);
	return API(lua_error)(L);
}

LUA_API int
luaL_checkoption (lua_State *L, int arg, const char *def,
	                        const char *const lst[]) {
	return API(luaL_checkoption)(L, arg, def, lst);
}

LUA_API	int
luaL_fileresult (lua_State *L, int stat, const char *fname) {
	return API(luaL_fileresult)(L, stat, fname);
}

LUA_API int
luaL_execresult (lua_State *L, int stat) {
	return API(luaL_execresult)(L, stat);
}

LUA_API int
luaL_ref (lua_State *L, int t) {
	return API(luaL_ref)(L, t);
}

LUA_API void
luaL_unref (lua_State *L, int t, int ref) {
	API(luaL_unref)(L, t, ref);
}

LUA_API int
luaL_loadfilex (lua_State *L, const char *filename,
	                                    const char *mode) {
	return API(luaL_loadfilex)(L, filename, mode);
}

LUA_API	int
luaL_loadbufferx (lua_State *L, const char *buff, size_t sz,
	                        const char *name, const char *mode) {
	return API(luaL_loadbufferx)(L, buff, sz, name, mode);
}

LUA_API int
luaL_loadstring (lua_State *L, const char *s) {
	return API(luaL_loadstring)(L, s);
}

LUA_API	lua_State *
luaL_newstate (void) {
	return API(luaL_newstate)();
}

LUA_API lua_Integer
luaL_len (lua_State *L, int idx) {
	return API(luaL_len)(L, idx);
}

LUA_API	void
luaL_addgsub (luaL_Buffer *b, const char *s,
	                          const char *p, const char *r) {
	API(luaL_addgsub)(b, s, p, r);
}

LUA_API const char *
luaL_gsub (lua_State *L, const char *s,
	                         const char *p, const char *r) {
	return API(luaL_gsub)(L, s, p, r);
}

LUA_API	void
luaL_setfuncs (lua_State *L, const luaL_Reg *l, int nup) {
	API(luaL_setfuncs)(L, l, nup);
}

LUA_API int
luaL_getsubtable (lua_State *L, int idx, const char *fname) {
	return API(luaL_getsubtable)(L, idx, fname);
}

LUA_API void
luaL_traceback (lua_State *L, lua_State *L1,
	                       const char *msg, int level) {
	API(luaL_traceback)(L, L1, msg, level);
}

LUA_API void
luaL_requiref (lua_State *L, const char *modname,
                                 lua_CFunction openf, int glb) {
	API(luaL_requiref)(L, modname, openf, glb);
}

LUA_API void
luaL_buffinit (lua_State *L, luaL_Buffer *B) {
	API(luaL_buffinit)(L, B);
}

LUA_API char *
luaL_prepbuffsize (luaL_Buffer *B, size_t sz) {
	return API(luaL_prepbuffsize)(B, sz);
}

LUA_API void
luaL_addlstring (luaL_Buffer *B, const char *s, size_t l) {
	API(luaL_addlstring)(B, s, l);
}

LUA_API void
luaL_addstring (luaL_Buffer *B, const char *s) {
	API(luaL_addstring)(B, s);
}

LUA_API	void
luaL_addvalue (luaL_Buffer *B) {
	API(luaL_addvalue)(B);
}

LUA_API void
luaL_pushresult (luaL_Buffer *B) {
	API(luaL_pushresult)(B);
}

LUA_API void
luaL_pushresultsize (luaL_Buffer *B, size_t sz) {
	API(luaL_pushresultsize)(B, sz);
}

LUA_API	char *
luaL_buffinitsize (lua_State *L, luaL_Buffer *B, size_t sz) {
	return API(luaL_buffinitsize)(L, B, sz);
}

LUAMOD_API int
init(lua_State *L, struct luaapi_export *api_table) {
	if (L == NULL) {
		apis = api_table;
	}
	return 0;
}
