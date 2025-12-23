#include<stdio.h>
#include<string.h>
typedef struct{
    char name[50];
    int id;
    float score;
}student;

void print(student *stu)
{
printf("姓名:%s\n",stu->name);
printf("id:%d\n",stu->id);
printf("score:%3.1f\n",stu->score);
}
int main()
{
student stu1={"王五",1,50};
student *ptr=&stu1;//定义结构体指针

printf("修改前\n");
printf("姓名:%s\n",ptr->name);
printf("id:%d\n",ptr->id);
printf("score:%3.1f\n",ptr->score);

ptr->score=100;
strcpy(ptr->name,"赵四");

printf("\n修改后\n");
printf("score:%3.1f\n",ptr->score);
printf("姓名:%s\n",ptr->name);

printf("\n结构体指针作为函数参数\n");
print(ptr);

//指针传址比传值高效
}
