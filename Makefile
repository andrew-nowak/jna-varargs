.PHONY: all
all: libtl.dylib libtl.so


libtl.dylib: tl.c
	cc -dynamiclib -arch arm64 -arch x86_64 -fPIC -o libtl.dylib tl.c

libtl.so: tl.c
	cc -shared -fPIC -o libtl.so tl.c
