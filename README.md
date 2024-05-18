# opengl-doc-wrapper
A single file header that wraps glad with OpenGL docs. It's based on OpenGL 4.5 from [docs.gl](https://docs.gl/).
*Most* functions are covered but some might be missing. Extensions are not included. 

# Motivation
Not all IDEs are able to give code completion for OpenGL functions loaded by glad. This is not good, especially if you are a beginner like me. Here's an example of what might happen with neovim + clangd
![image](https://github.com/DaveH355/opengl-doc/assets/101005658/46997d64-232c-4930-b056-26067aa22376)

With the documentation wrapper, it can give better info
![image](https://github.com/DaveH355/opengl-doc/assets/101005658/94f6fe93-e2bb-44d5-9143-998b31a1e7dd)


# Usage
Get started by downloading the desired header for C or C++ from this project's include folder. 
You can use the header alongside glad. You can remove it later without affecting your code. 
```c
#include <glad/glad.h>
#include "gldoc.h"
```
or use it in place of glad
```c
#include "gldoc.h"
```


