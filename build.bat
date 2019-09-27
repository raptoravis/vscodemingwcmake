rem if not exist build md build
rem cd build
rem cmake .. -G "MinGW Makefiles" 
rem mingw32-make

cmake -S . -B ./build -G "MinGW Makefiles" 

cmake  --build ./build
