#include<stdio.h>
#include<stdlib.h>
//修改指针的指向
//在C语言中，函数参数是按值传递的
//如果只传递arr（指针本身），函数内部修改指针的指向，不会影响到main函数中的arr
//传递&arr（指针的地址），函数可以通过这个地址修改main函数中的arr

void allocateMemory(int **ptr,int size)
{
    *ptr=(int*)malloc(size*sizeof(int));//解引用一次，*ptr即arr，修改*ptr就修改了arr的指向
    for(int i=0;i<size;i++)              //malloc分配内存后，把返回的地址赋予*ptr，arr就指向新内存
    {
        (*ptr)[i]=i*10;//初始化arr，即初始化数组元素
    }
}

int main()
{
    int *arr=NULL;
    int size=5;

    allocateMemory(&arr, size);
    {
        if(arr!=NULL)
        {
            for(int i=0;i<size;i++)
            {
               printf("arr[%d]=%d\n",i,arr[i]); 
            }
        
            free(arr);
        }

    }

    return 0 ;
}

