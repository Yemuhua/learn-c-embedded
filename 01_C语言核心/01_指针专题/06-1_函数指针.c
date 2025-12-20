#include<stdio.h>
//函数指针是指向函数的指针变量，它存储函数的地址，可以用来调用函数
//用typedef定义函数指针类型

typedef int (*MathFunc)(int, int);//定义函数指针类型

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int main()
{
    int m=10;
    int n=15;

    MathFunc func;//用新类型声明变量，func是存储函数地址的指针

    func = add;//函数名本身就是指针

    printf("m+n=%d\n",func(m,n));

    func = sub;

    printf("m-m=%d\n",func(m,n));

    return 0;
}