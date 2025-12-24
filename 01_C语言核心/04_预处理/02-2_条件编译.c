//编译器本身会预定义很多宏，这些宏提供了关于编译环境的重要信息

/*操作系统相关 

_WIN32      // Windows 32位和64位
_WIN64      // 仅Windows 64位
__linux__   // Linux系统
__APPLE__   // macOS/iOS
__unix__    // Unix-like系统
*/

/*编译器相关
__GNUC__    // GCC编译器版本号（如：7, 8, 9...）
__clang__   // Clang编译器
_MSC_VER    // MSVC编译器版本号
*/

/*架构相关
__x86_64__  // x86-64架构
__i386__    // x86 32位架构
__arm__     // ARM架构
__aarch64__ // ARM 64位架构
*/

/*标准检测
__cplusplus // C++标准版本
__STDC__    // 符合C标准
__STDC_VERSION__ // C标准版本
*/

#include<stdio.h>

int main() {
    // 编译器信息
    printf("编译器信息:\n");
    
    #ifdef __GNUC__
        printf("GCC编译器,版本：%d.%d.%d\n", 
               __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    #endif
    
    #ifdef __clang__
        printf("Clang编译器,版本：%d.%d.%d\n",
               __clang_major__, __clang_minor__, __clang_patchlevel__);
    #endif

    printf("\n更多细节:\n");
    printf("编译日期：%s %s\n", __DATE__, __TIME__);
    printf("当前行号：%d\n", __LINE__);
    printf("源文件名：%s\n", __FILE__);
    return 0;
}
