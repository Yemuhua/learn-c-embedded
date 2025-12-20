#include<stdio.h>
#include<stdlib.h>

/*  作为函数参数时，数组名会退化为指针，所以字符串指针数组名会退化为指向数组首元素（char*）的二级指针
    用二级指针来遍历字符串数组
*/

void printstings(char **str,int count)
{
    for(int i=0;i<count;i++)
    {
        printf("string%d=%s\n",i,*(str+i));//用二级指针遍历
    }
}

int main()
{
    char *names[] = {"Alice", "Bob", "Charlie", "David"};
    int count=sizeof(names)/sizeof(names[0]);
    printstings(names,count);
    return 0;

}