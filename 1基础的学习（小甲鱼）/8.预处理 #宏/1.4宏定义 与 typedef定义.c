/**
宏定义 只是简单的字符串代换,是在预处理时完成的
typedef 是在编译时处理,它不是简单的代换,而是对类型说明符的重新定义
指针占4个字节，字符占1个字节
**/

#include <stdio.h>

#define PIN1 char*  //宏定义
typedef char* PIN2;

void main()
{
    PIN1 x, y; //char *a, b;  只是简单替换
    PIN2 a, b; //char *a, *b; 对ab类型重新定义

                                  //sizeof()计算所占字节
    printf("#define:%d %d\n\n", sizeof(x), sizeof(y));
    printf("typedef:%d %d", sizeof(a), sizeof(b));
}
