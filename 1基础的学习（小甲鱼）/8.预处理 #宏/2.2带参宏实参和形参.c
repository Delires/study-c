/**
定义:#define 宏名(形参表) 字符串
调用:宏名(实参表);

带参宏定义中 形参是标识符
而宏调用中   实参可以是表达式

^异或符 两个相同的数异或0
        两个不同的数异或1
        0异或任何数为任何数
**/
#include <stdio.h>

#define SAY(y) (y)^(y)

void main()
{
    int i=0;
    char say[] = {73,32,108,111,118,101,32,102,105,115,104,99,46,99,111,109,36};

    while(say[i])
    {
        say[i] = SAY(say[i]+1); //宏调用的实参是一个数组，自己和自己异或为0
#if(0)
        say[i] = SAY(say[i]) ^ (say[i];//SAY(say[i]) == say[i]^say[i] ==0
#endif
        i++;                           //0 ^ say[i] == say[i]
    }
    printf("\n\t%s\n\n", say);
}
