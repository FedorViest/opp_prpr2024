# CLION setup multiple files

1. Right-click source directory 
2. Select New->C/C++ Source File
3. Name your file, select .c, uncheck Add to targets

![img.png](img.png)
4. Go to Settings (CTRL + Alt + S) and go to Build, Execution, Deployment->CMake
5. Check Reload CMake project ... and click Apply/OK

![img_1.png](img_1.png)
6. Go to CMakeLists.txt file
7. Add new line add_executable(\<configuration name> \<.c file name>) (You need to do this part for each new file)

![img_2.png](img_2.png)
8. On top-right you should see configurations of your c files

![img_3.png](img_3.png)

In case of any issues you can follow this tutorial: [tutorial](https://www.youtube.com/watch?v=Ok4eHRPcb2g)