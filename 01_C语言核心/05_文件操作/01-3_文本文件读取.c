#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) return 1;
    
    char buffer[256];//设置缓冲区
    int line_num = 1;
    
    while (fgets(buffer, sizeof(buffer), file) != NULL) //fgets函数用法fgets(char *str, int n, FILE *stream) n通常是缓冲区数组长度
    {
        // 移除换行符（如果存在）
        buffer[strcspn(buffer, "\n")] = '\0';
        printf("第%d行: %s\n", line_num++, buffer);
    }
    
    fclose(file);
    return 0;
}

//要时刻检查fopen的返回值！