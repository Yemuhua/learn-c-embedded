#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};
    int*ptr=arr;
    printf("初始指针位置:prt = % p, *ptr = % d\n",ptr,*ptr);
    ptr++; //指针加法
    printf("ptr+1:prt=%p,*ptr=%d\n",ptr,*ptr);

    ptr=ptr-2;//指针减法
    printf("ptr-2:prt=%p,*ptr=%d\n",ptr,*ptr);

    //（只有同类型）指针之间只能相减
    //只能加减整数，加减的不是字节,而是该类型所占的字节数
    int arr2[5]={1,2,3,4,5};
    int*ptr1=&arr2[0];
    int*ptr2=&arr2[1];
    printf("ptr1 == ptr2: %s\n", ptr1 == ptr2 ? "true" : "false");//指针的比较运算

}
