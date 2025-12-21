#include<stdio.h>

//运用回调函数

typedef void(*foreach)(int);

//功能一
void printf_numble(int a)
{
    printf("%d\n",a);
}

//功能二
void printf_double(int a)
{
    printf("%d的两倍是:%d\n",a,a*2);
}

//功能三
void printf_is_even(int a)
{
    if(a%2==0)
    {
        printf("%d是偶数\n",a);
    }
    else printf("%d是奇数\n",a);
}

//主函数
void abb(int arr[],int size,foreach f)
{
    for(int i=0;i<size;i++)
    {
        f(arr[i]);
    }
}

int main()
{
    int arr[]={11,12,13,14,15,16,17,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    int require=0;
    printf("打印数据功能输入1\n打印两倍数据功能输入2\n判断数据奇偶输入3\n");
    scanf_s("%d",&require);

    switch(require)
    {
        case 1:
        abb(arr,size,printf_numble);
        break;

        case 2:
        abb(arr,size,printf_double);
        break;

        case 3:
        abb(arr,size,printf_is_even);
        break;

    }

}