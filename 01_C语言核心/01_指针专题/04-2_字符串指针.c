#include <stdio.h>

int main()
{
    char *str = "Hello, World!";

    //使用指针遍历字符串
    char *p = str;
    for (; *p!='\0'; p++)
        {
        printf("%c ", *p);
        }

    //计算字符串长度
    size_t my_strlen(const char *s);
    printf("\nLength of string: %zu\n", my_strlen(str));

    //复制字符串
    char *my_strcpy(char *str2, const char *str1);
    char *str1="hello";
    char str2[20];

    char*result=my_strcpy(str2, str1);
    printf("Copied string: %s\n", result);

    //字符串连接
    char* my_stract(char* str1,const char*str2);

    char str3[50]="Hello, ";
    char str4[]="World!";
    char*result2=my_stract(str3,str4);
    printf("Concatenated string: %s\n", result2);





    
    }

size_t my_strlen(const char *s)//size_t无符号整型,用于表示大小、长度、数量等非负值;const防止修改字符串内容
    {
         const char *p =s;
        while(*p !='\0')
          {
              p++;
          }
         return p - s;//两指针指向同一个数组，相减得到字符串长度
        }

char *my_strcpy(char *str2,const char *str1)
        {
            char *p=str2;//保存str2的起始地址
            while((*p++=*str1++)!='\0');
            return str2;//传递的是地址值，返回str2的起始地址

        }
char* my_stract(char* str1,const char*str2)
{
    char*p=str1;
    while(*p!='\0')//找到str1的结尾
    {
        p++;
    }

    while((*p++=*str2++)!='\0');//将str2复制到str1的结尾
    return str1;

}