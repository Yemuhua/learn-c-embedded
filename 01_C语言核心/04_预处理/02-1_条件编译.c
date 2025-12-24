#include<stdio.h>
//条件编译是C语言预处理器的重要功能，它允许根据特定条件决定是否编译某段代码

//语法
/*  #ifdef 宏名
        // 如果宏已定义，编译这里的代码
    #else
        // 如果宏未定义，编译这里的代码（可选）
    #endif
*/
/*  #ifndef 宏名
        // 如果宏未定义，编译这里的代码
    #else
        // 如果宏已定义，编译这里的代码（可选）
#endif
*/

//应用场景
//头文件保护（防止重复包含）
/*
#ifndef MYHEADER_H  // 如果MYHEADER_H未定义
#define MYHEADER_H  // 则定义它

int add(int a, int b);//头文件内容
#endif
*/

//平台特定代码
/*#ifdef _WIN32
    // Windows平台代码
    #include <windows.h>
#elif __linux__
    // Linux平台代码
    #include <unistd.h>
#elif __APPLE__
    // macOS平台代码
    #include <TargetConditionals.h>
#endif
*/

/*#include <stdio.h>

// #define DEBUG  // 注释掉这行则关闭调试（功能开关）

int main() {
    int x = 10;
    
    #ifdef DEBUG
        printf("调试信息: x = %d\n", x);
        printf("当前文件: %s, 行号: %d\n", __FILE__, __LINE__);
    #endif
    
    // 其他代码...
    return 0;
}
*/