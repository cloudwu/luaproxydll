LUA_INC=-I /e/opensource/lua/src
LUA_LIB=-L /e/opensource/lua/src

all : apiexport.dll lua.dll testlib.dll

apiexport.dll : apiexport.c
	gcc -Wall -O2 --shared -o $@ $^ $(LUA_INC) $(LUA_LIB) -llua54

lua.dll : luaproxy.c
	gcc -Wall -O2 --shared -o $@ $^ $(LUA_INC)

testlib.dll : testlib.c | lua.dll
	gcc -Wall -O2 --shared -o $@ $^ $(LUA_INC) -L. -llua

clean :
	rm -rf apiexport.dll lua.dll testlib.dll