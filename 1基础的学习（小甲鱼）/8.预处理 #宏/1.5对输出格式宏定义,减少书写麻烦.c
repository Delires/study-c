/**
对输出格式%d%f%s%c进行宏定义，减少书写麻烦
**/
#include <stdio.h>

#define P printf
#define D "%d\n"
#define F "%f\n"
#define C "%c\n"           //宏定义就是替换

void main()
{
    char a = 'f';          //("D") 错误 宏明再""里不替换
    int b = 68;
    float c = 68.68;
    P(C, a); //printf("%c\n", a);
    P(D, b);
    P(F, c);
}
