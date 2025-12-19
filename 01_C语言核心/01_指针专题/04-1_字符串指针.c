#include <stdio.h>
int main()
{
char str1[]="hello";

char* ptr=str1;//指向字符数组，字符串被存放在栈区
char* ptr2="hello";//指向字符串常量，因为只声明了指针，字符串被分配到常量区

printf("====指针与数组====\n");
printf("ptr=%s\n",ptr);//hello

//sizeof的区别
printf("sizeof(ptr)=%zu（指针大小）\n",sizeof(ptr));//8
printf("sizeof(str1)=%zu（数组大小）\n",sizeof(str1));//6

//字符串常量不可修改（字符指针不可以，数组可以）

//*ptr[0]='H';错误，字符串常量不可修改
//str1[0]='H';正确，数组可以修改


//指针可以重新指向
char *a="hello world";
a= "new string";//正确，指针可以重新指向
printf("str1=%s\n",a);

return 0;

//注意:printf 使用 %s 格式符时，需要传入字符指针（地址），而不是字符本身

}


