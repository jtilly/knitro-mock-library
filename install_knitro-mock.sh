#/bin/sh

# create folder structure and download skeleton
mkdir ~/knitro-mock-library
cd ~/knitro-mock-library
wget https://github.com/jtilly/knitro-mock-library/raw/master/skeleton.zip
unzip ~/skeleton
cd lib
# compile knitro-mock-library.cpp
gcc -fPIC -c knitro-mock-library.cpp
# create the so
gcc -shared -Wl,-soname,libknitro.so.9 -o libknitro.so.9.1 knitro-mock-library.o
ln -sf libknitro.so.9.1 libknitro.so
ln -sf libknitro.so.9.1 libknitro.so.9

export KNITRO=~/knitro-mock-library
export LD_LIBRARY_PATH=~/knitro-mock-library/lib
