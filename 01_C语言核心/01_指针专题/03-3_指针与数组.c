#include <stdio.h>
//多维数组与指针的关系

int main()
{
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    printf(" arr = %p\n", arr);           //二维数组名表示二维数组的首地址
    printf("&arr = %p\n", &arr);

    printf("arr[0]=%d\n", *arr[0]);//arr[0]表示二维数组的第一行首地址
     printf("*(arr[0]+1)=%d\n", *(arr[0]+1));
    
    printf("*(*(arr+1)+2)=%d\n", *(*(arr+1)+2)); //arr+1表示二维数组的第二行首地址
    printf("*arr[2]=%d\n", *arr[2]); //arr[2]表示二维数组的第三行首地址 
        
    
    
}