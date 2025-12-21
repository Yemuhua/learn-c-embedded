#include <stdlib.h>
#include <stdio.h>

void leaky_function() {
    int *ptr = (int *)malloc(sizeof(int) * 100);  // 分配内存
    *ptr = 42;
    // 没有释放内存
    // free(ptr);  
}

int main() {
    printf("开始内存泄漏演示...\n");
    
    for(int i = 0; i < 100; i++) {
        leaky_function();  // 每次调用都泄漏内存
    }
    
    printf("已泄漏大量内存！\n");
    printf("程序结束，但内存未被释放\n");
    
    return 0;
}

//内存泄露：当程序使用完动态分配的内存后，如果没有及时释放，就会导致系统无法回收这部分内存（程序结束后系统会回收）
//每次分配完内存，都必须有对应的释放！！
//推荐使用c++的智能指针！

