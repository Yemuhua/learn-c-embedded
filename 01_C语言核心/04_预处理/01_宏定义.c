#include<stdio.h>

#define PI=3.14//定义常量

#define SQUARE(x) ((x) * (x))//定义宏函数，注意括号
//int result = SQUARE(1 + 2); // 展开：((1 + 2) * (1 + 2)) = 9
#define SQUAREX(x) x * x
//int result = SQUARE(1 + 2); // 展开：1 + 2 * 1 + 2 = 5

//可使用反斜杠实现多行宏的定义,用do-while(0)包裹确保能正常展开

#define print(x)\
    do{\
        printf("ssss\n");\
    }while(0)

//复杂逻辑优先使用内联函数

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)//字符串化
//##连接运算符,用于创建多个变量
#define DECLARE_COUNTER(n) int counter_##n = 0
//命名约定
#define MACRO_NAME   // 全大写，单词间用下划线
#define FunctionLikeMacro(x)  // 首字母大写


int main()
{
    printf("%s\n", STRINGIFY(PI));  // 输出："PI"
    printf("%s\n", TOSTRING(PI));   // 输出："3.14159"
    
    DECLARE_COUNTER(1);  // int counter_1 = 0
    DECLARE_COUNTER(2);  // int counter_2 = 0
}

// 避免创建过于复杂的宏
// 宏不进行类型检查，调试困难
// 复杂的逻辑应该用函数实现
