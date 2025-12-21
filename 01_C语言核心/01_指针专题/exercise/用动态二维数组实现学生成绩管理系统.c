#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("=====学生成绩管理系统=====\n");
    int students=0;
    int courses=0;
    

    printf("请输入学生人数:\n");
    scanf_s("%d",&students);
    printf("请输入课程门数:\n");
    scanf_s("%d",&courses);

    int **table=(int**)malloc(students*sizeof(int*));
    if(table==NULL)
    {
        printf("内存分配失败\n");
    }
        
    for(int i=0;i<students;i++)
        {
            table[i]=(int*)malloc(courses*sizeof(int));
            if(table[i]==NULL)
            {
                printf("第%d个学生成绩内存分配失败\n",i+1);
                for(int j=0;j<i;j++)
                {
                    free(table[j]);
                }
                free(table);
                break;
            }
        }

        printf("\n请输入学生成绩(学生 课程)\n");
        for(int i=0;i<students;i++)
        {
            printf("学生%d成绩:\n",i+1);
            for(int j=0;j<courses;j++)
            {
                printf("课程%d\n",j+1);
                scanf_s("%d",&table[i][j]);
            }
        }

        printf("\n======成绩分析======\n");

        for(int i=0;i<courses;i++)//每门科目平均分
        {
            int sum=0;
            for(int j=0;j<students;j++)
            {
                sum+=table[j][i];
            }
            printf("科目%d的平均分:%3.1f\n",i+1,(float)sum/students);
        }

        for(int i=0;i<students;i++)//每名学生平均分
        {
            int sum=0;
            for(int j=0;j<courses;j++)
            {
                sum+=table[i][j];
            }
            printf("学生%d的平均分是:%3.1f\n",i+1,(float)sum/courses);

        }

        //最高成绩

        int max=table[0][0];

        for(int i=0;i<students;i++)
        {
            for(int j=0;j<courses;j++)
            {
                if(max<table[i][j])
                {
                    max=table[i][j];
                }
        
            }
         }
         printf("最高分:%d\n",max);

         //最低成绩
         
         int mix=table[0][0];
         
         for(int i=0;i<students;i++)
        {
            for(int j=0;j<courses;j++)
            {
                if(mix>table[i][j])
                {
                    mix=table[i][j];
                }
        
            }
         }
         printf("最低分:%d\n",mix);

         return 0;

}
