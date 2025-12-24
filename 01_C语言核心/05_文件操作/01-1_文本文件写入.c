#include <stdio.h>

// 基本流程：
// 1. 打开文件 (fopen)
// 2. 读写文件 (fprintf, fscanf, fgets, fputc等)
// 3. 关闭文件 (fclose)

//打开模式
/*"r" - 只读（文件必须存在）

"w" - 只写（创建新文件或清空已有文件）

"a" - 追加（在文件末尾添加）

"r+" - 读写（文件必须存在）

"w+" - 读写（创建新文件或清空已有文件）

"a+" - 读写追加（可在末尾读写）
*/
int main()
{
    FILE *file = fopen("example.txt", "w");
    
    if (file == NULL) {
        printf("无法打开文件！\n");
        return 1;
    }
    
    // 写入字符串
    fprintf(file, "Hello, World!\n");
    fprintf(file, "这是第%d行\n", 2);
    
    // 写入单个字符
    fputc('A', file);
    fputc('\n', file);
    
    // 写入字符串（无格式化）
    fputs("这是一行文本\n", file);
    
    fclose(file);
    printf("写入完成！\n");
    return 0;
}


