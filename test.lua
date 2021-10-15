local export = require "apiexport"

local so = assert(package.searchpath("lua", package.cpath))
export.register(package.loadlib(so, "init"))

local testlib = require "testlib"

print(testlib.test())
