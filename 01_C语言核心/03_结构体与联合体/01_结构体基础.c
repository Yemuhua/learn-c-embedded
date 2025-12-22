#include<stdio.h>
#include<string.h>

struct date{
    int year;
    int month;
    int day;
};

typedef struct{
    char name[50];
    int age;
    int score;
    struct date birthday;
}student;//用typedef定义结构体。只定义类型，没有数据存放

student stu1,stu2;//声明结构体变量，用于存放数据

typedef struct{
    char name[10];
    int price;
}fruit;



int main()
{
    //给结构体变量赋值
    student stu3={"李华",10,50};//声明变量时直接初始化
    
    strcpy(stu1.name,"王五");//直接赋值
    stu1.score=33;

    student stu2={
        .name="赵四",
        .score=20
    };

    //引用结构体变量
    printf("引用结构体变量\n");
    printf("姓名:%s\nscore:%d\nage:%d\n",stu3.name,stu3.score,stu3.age);

    //结构体数组

    fruit a1[2]={
        {"apple",2},
        {"banana",1}
    };

    for(int i=0;i<2;i++)
    {
        printf("%s的价格%d\n",a1[i].name,a1[i].price);
    }

//结构体嵌套,注意定义结构体顺序

    student stu4={
        .name="66",
        .score=55,
        .age=15,
        .birthday={2001,12,1}//用大括号
    };

printf("名字:%s\n成绩:%d\n年龄:%d\n生日:%d年%d月%d日\n",stu4.name,stu4.score,stu4.age,stu4.birthday.year,stu4.birthday.month,stu4.birthday.day);

    







}


