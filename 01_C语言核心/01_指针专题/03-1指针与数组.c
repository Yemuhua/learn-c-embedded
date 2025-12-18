#include<stdio.h>
//数组名会被编译器转换为指向数组首元素的指针常量

int arr[3]={100,200,300};
int main()
{
    //数组名作指针使用
    printf("arr=%p\n",arr);
    printf("&arr[0] = %p\n", arr[0]);

    //访问数组元素三种方式
    printf("\n访问数组元素的三种方式:\n");
    printf("arr[%d]=%d\n",0,arr[0]);
    printf("*(arr+1)=%d\n",*(arr+1));
    printf("*(1+arr)=%d\n",*(1+arr));

    //两种特殊情况数组名不会转化为指针
    
    //第一种 sizeof(数组名)
    printf("（整个数组字节大小）sizeof(arr)=%d\n",sizeof(arr));//显示整个数组字节大小

    printf("（整个数组元素个数）sizeof(arr)=%d\n",sizeof(arr)/sizeof(arr[0]));//计算数组元素个数,总字节数除以一个元素字节数

    //第二种 &数组名
     printf("地址值比较:\n");
    printf("arr     = %p\n", (void*)arr);  
    printf("&arr[0] = %p\n", (void*)&arr[0]);
    printf("&arr    = %p\n", (void*)&arr);

    //三者地址值是相同的，但是三者类型是不一样的
    //arr 和 &arr[0] 都是指向数组首元素的指针，类型是 int*
    //&arr 是指向整个数组的指针，类型是 int (*)[3]

      printf("\n虽然地址值相同，但类型不同:\n");
    printf("arr 的类型:     int*\n");
    printf("&arr[0] 的类型: int*\n （指向数组首元素的指针）");
    printf("&arr 的类型:    int(*)[3] (指向整个数组的指针)\n"); 

    printf("\n3. 指针运算:\n");
    printf("   arr + 1     = %p (跳过1个int: 4字节)\n", (void*)(arr + 1));
    printf("   &arr[0] + 1 = %p (同上)\n", (void*)(&arr[0] + 1));
    printf("   &arr + 1    = %p (跳过整个数组: 20字节)\n", (void*)(&arr + 1));

    printf("\n4. 解引用:\n");
    printf("   *arr      = %d\n", *arr);
    printf("   *&arr[0]  = %d\n", *&arr[0]);
    printf("   **&arr    = %d (需要两次解引用)\n", **&arr);

}
  