//数组作函数参数会转化为指针

int sum(int arr[], int size)//arr[]等价于*arr等价于&arr[0] 
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = sum(numbers, size);
    printf("Sum: %d\n", result);
    return 0;
}