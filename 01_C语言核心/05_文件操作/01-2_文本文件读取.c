//逐字符读取
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("文件不存在！\n");
        return 1;
    }
    
    int ch;
    printf("文件内容：\n");
    while ((ch = fgetc(file)) != EOF)//EOF是 end of file,通常在文本文件末尾处


    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);  // 输出到屏幕
    }
    
    fclose(file);
    return 0;
}