# [![Author](https://img.shields.io/badge/Author---Ashal-blu)](https://img.shields.io/badge/Author---Ashal-blu?utm_source=github.com&utm_medium=campaign&utm_content=button&utm_campaign=dmhendricks%2Ffile-icon-vectors)

## Setting up graphics library (graphics.h) in Visual Studio Code (c++)

### Table Of Content

- [General info](#general-info)
- [files](#files)
- [Setup](#setup)
- [.vscode config file](https://github.com/ashalupreti/c-cpp-graphics/tree/main/.vscode)

Example

![graphics example](https://user-images.githubusercontent.com/90265701/206486439-24d61ddc-e6a0-4883-8490-6d1398edc526.png)

## General information

The graphics. h header file provides access to a simple graphics library that makes it possible to draw lines, rectangles, ovals, arcs, polygons, images, and strings on a graphical window. The second step is initialize the graphics drivers on the computer using initgraph method of graphics. h library.

`<graphics.h> is very old library. It's better to use something that is new.`

Trust Me **There are much better option**

Allegro or SDL libraries may be for you.
You could also try SFML. It has quite a following. You'll have a large community behind you if you needed any help.

---

## files

- [Graphics](./graphics.h)
- [Winbgim](./winbgim.h)
- [libbgi](./libbgi.a)

## Setup

Get all the files needed `graphics.h`, `winbgim.h` and `libbgi.a`

If you don't have MinGW installed get it from official and follow the steps.

- Copy `graphics.h` and `winbgim.h` files to MinGW/`include` folder.

location might be **("C:\MinGW\include\")**

- Copy `libbgi.a` to file to MinGW/`lib` folder.

location might be **("C:\MinGW\lib\")**

Open Vs Code Smart way:

- Select a folder and open Terminal

```bash
   mkdir C-Cpp-graphics
   cd C-Cpp-graphics
   code .
```

if you are using template with task and c_cpp_properties json file then you directory should look like this:

- All you code should o inside `src` and the task.json will build the .exe in `build` folder

```cmd
C-Cpp-graphics
├───.vscode
└───Home
    ├───build
    └───src
```

- Get the template from the repo [.vscode config](https://github.com/ashalupreti/c-cpp-graphics/tree/main/.vscode) which will contain `task.json`, `c_cpp_properties.json`

![image](https://user-images.githubusercontent.com/90265701/206495618-aeafc032-bd06-4111-b5ed-3e347ed88cfc.png)

```cpp

#include <graphics.h>
    int main()
    {
        int gd = DETECT, gm;
        char data[] = "C:\\MinGW\\lib\\libbgi.a";

        initgraph(&gd, &gm, data);


        circle(200, 200, 100);
        getch();
        closegraph();
        return 0;
    }
```

Running the file using command in termainl:

```cmd
    g++ -o example bar.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

    //after u'll get example.exe run using command: .\example
```

![image](https://user-images.githubusercontent.com/90265701/206496768-c83d2218-6ec0-48bc-95fe-53ea1cda2ac6.png)

OR

- Just `Ctrl+Shift+B` to run the build task you will get the executable file in build folder

![graphics example2](https://user-images.githubusercontent.com/90265701/206497821-cd08cfe8-898a-47c0-9b04-658959fa25de.png))
![graphics example3](https://user-images.githubusercontent.com/90265701/206497861-077bb5c7-2f01-46e2-837d-ff0b94092aa9.png)

Easy run template for graphics.h [repo](https://github.com/ashalupreti/c-cpp-graphics)
If your dont want to write that command again and again you can create [task.json](https://github.com/ullaskunder3/graphics.h-setup/tree/main/.vscode)

## Compiler:

- Setup MingW 32 compiler path in environment variables.
- Insert graphics.h and winbgim.h header file from the [`graphics file`](https://github.com/ashalupreti/c-cpp-graphics/blob/main/graphics.h)
  [`winbgim file`](https://github.com/ashalupreti/c-cpp-graphics/blob/main/winbgim.h)
  [`libbgi file`](https://github.com/ashalupreti/c-cpp-graphics/blob/main/libbgi.a) in mingw's include folder and libbgi.a file into lib folder of mingw folder that we've installed already

## Quick setup

```bash
git clone https://github.com/ashalupreti/c-cpp-graphics
```

- Just `Ctrl+Shift+B` to run the build task you will get the executable file in build folder

## !mportant

- Folder `src` contains source code

- Folder `build` where compiler generate .exe

- .vscode contains c_cpp_properties.json and task require modification according to your environment and types compiler
