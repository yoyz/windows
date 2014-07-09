Download last Development Libraries: http://www.libsdl.org/download-1.2.php

copy the include and the lib then

/c/MinGW/bin/mingw32-g++.exe -o test_sdl.exe   test_sdl.cpp   -D__WIN32__  -I/c/MinGW/include/ -L. -lmingw32 -lSDLmain -lSDL

/c/MinGW/bin/mingw32-g++.exe -o test_sdl_2.exe test_sdl_2.cpp -D__WIN32__  -I/c/MinGW/include/ -L. -lmingw32 -lSDLmain -lSDL_mixer -lSDL

/c/MinGW/bin/mingw32-g++.exe -o test_sdl_3.exe test_sdl_3.cpp -D__WIN32__  -I/c/MinGW/include/ -L. -lmingw32 -lSDLmain -lSDL_mixer -lSDL


