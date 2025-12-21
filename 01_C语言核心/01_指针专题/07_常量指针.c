#include<stdio.h>

//总结“*”左边的东西就是指针指向的东西


int main()
{
const int *p;//p是指向一个常量的指针
int a =10;
int b =20;
//p可以修改指向 
p =&a;
p=&b;
//*p=30是错的，不能通过p改常量a

int c=100;
int * const pp=&c;//pp是一个常量指针
*pp=200;
printf("c=%d\n",*pp);//可以通过pp修改c的值，不能改pp的指向 

int d=400;

const int * const ppp=&d;//ppp是一个指向常量的指针常量
//不能修改ppp的指向，也不能通过ppp改d的值
}