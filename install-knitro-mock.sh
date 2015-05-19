#/bin/sh

# this script is used by travis to build knitroR

# create folder structure and download skeleton
mkdir ~/knitro-mock-library
cd ~/knitro-mock-library
mkdir include
cd include
wget https://github.com/jtilly/knitro-mock-library/raw/master/include/knitro.h
cd ../
mkdir lib
cd lib
wget https://github.com/jtilly/knitro-mock-library/raw/master/lib/knitro-mock-library.c

# compile knitro-mock-library.c
gcc -fPIC -c knitro-mock-library.c

# create the so
gcc -shared -Wl,-soname,libknitro.so.9 -o libknitro.so.9.1 knitro-mock-library.o
ln -sf libknitro.so.9.1 libknitro.so
ln -sf libknitro.so.9.1 libknitro.so.9
cd ~
