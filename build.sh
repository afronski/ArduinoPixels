#!/bin/sh

if [ `uname -s` = "Darwin" ]; then
	MAKEFILE=Makefile.osx
else
	MAKEFILE=Makefile
fi

pushd libraries/PixelShared
make $@

popd
pushd libraries/PixelGame
make $@

popd
pushd pixelApp
make -f $MAKEFILE $@
