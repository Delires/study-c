#include <stdio.h>

void main(void)  //main里不能有任何返回值和参数
{
    const char *str = "hemengdi shi zhu";
     //声明一个名为str的指针变量，变量里存放字符串的首地址
     //它
    printf("%s\n\n", str);

#if(0)
    str[0]='w'; //非法
#endif

    str = "pig is hemengdi"; //强制把str改变
    printf("%s", str);
}
