#include<stdio.h>
#include<stdlib.h>

//二级指针是指向指针的指针，用于存储指针变量的地址

int main()
{
    int num= 5;
    int *p=&num;
    int *pp=p; //二级指针

    printf("num=%d\n",num);
    printf("p存储的地址%p\n",p);
    printf("pp存储的地址%p\n",pp);
    printf("p的地址=%p\n",&p);
    printf("pp的地址=%p\n",&pp);

    return 0;
}