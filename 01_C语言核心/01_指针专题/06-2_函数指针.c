#include<stdio.h>
//函数指针数组

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divi(int a,int b){return a/b;}

typedef int(*MathFunc)(int,int);//定义单个函数指针类型

MathFunc func[4]={add,sub,mul,divi};//定义函数指针数组类型

int main()
{
    printf("==四则运算==\n");
    for(int i=0;i<4;i++)
    {
        printf("func[%d]=%d\n",i,func[i](10,2));
    }
}
