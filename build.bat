if not exist build md build
cd build
cmake .. -G "MinGW Makefiles" 

rem mingw32-make
cmake  --build .
