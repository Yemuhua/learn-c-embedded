#include<stdio.h>

//联合体是一种特殊的数据类型，允许在同一内存位置存储不同的数据类型。所有成员共享同一块内存空间（结构体每个成员占据独立的内存）

typedef union{
    int i;
    float f;
    char arr[10];
}Data;

int main()
{
    Data data;
    data.i=10;//现在i有效
    printf("%d\n",data.i);

    data.f=3.14;//现在f有效,i的值被覆盖
    printf("%f\n",data.f);

    //联合体的大小由最大成员的数据类型决定（要考虑内存对齐）
}



