#include<stdio.h>
#include<stdlib.h>
//栈内存由编译器管理，内存小，访问速度快，主要用于局部变量、局部参数
//堆内存必须手动管理，内存大，访问速度相对较慢，必须手动释放，用于大内存需求场景

//栈内存示例
void demo()
{
    int a=10;//函数返回时自动释放
}

//堆内存示例

void abb()
{
    int *abb=(int*)malloc(20*sizeof(int));
    if(abb!=NULL)
    {
        for(int i=0;i<20;i++)//使用堆内存
        {
            abb[i]=i*i;
        }
    }
    else printf("内存分配失败");//补充部分：检查是否分配成功
    free(abb);//手动释放
}

//堆内存必须及时释放
//避免悬垂指针，即使设为NULL
//要检查malloc是否返回一个空指针