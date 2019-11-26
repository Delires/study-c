/**
a=a+7 则a的赋给的地址就是第七个字母的地址(a从0开始)
                     所以打印出来是从第七个字母开始

而对于数组打印出来的单纯就是第七个字母
**/

#include <stdio.h>
void main()
{
    char a[20] = "henmengdi shi zhu";
    printf("%c\n", a[7]);
    //打印出来的是第七个字母

    char *b = "hengmengdi shi zhu ";
    printf("%s", b+7);
    //打印出来的是从第七个字母开始后的数
}
