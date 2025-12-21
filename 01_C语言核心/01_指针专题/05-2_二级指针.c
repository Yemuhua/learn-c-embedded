#include<stdio.h>
#include<stdlib.h>
int main()
{
    //动态二维数组
    int row=3;
    int cols=4;

    int** matrix=(int**)malloc(row*sizeof(int*));//分配行指针数组
    
    for(int i=0;i<row;i++)//为每行分配列空间
    {
        matrix[i]=(int*)malloc(cols*sizeof(int));
    }

    for(int i=0;i<row;i++)//赋值
    {
        for(int j=0;j<cols;j++)
        {
            matrix[i][j]=i*cols+row;
        }
    }

    for(int i=0;i<row;i++)//访问每一个元素
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",matrix[i][j]);
        }
            printf("\n");
    }



    for(int i=0;i<row;i++)
    {
        free(matrix[i]);//释放每一行数据
    }
    free(matrix);//再释放指针数组

    return 0;
}