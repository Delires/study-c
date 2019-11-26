/**
字符数组a[] 里的每个元素都会在内存中储存
字符指针*a  只会在内存中储存字符串第一个元素的地址

字符数组赋值不可以                    只能
       char a[];                       char a[]="hhemengdi shi zhu";
       a = "hemengdi shi zhu";
字符指赋值针可以
       char *a;
       a = "hemengdi shi zhu";

**/
#include <stdio.h>
void main()
{
    char *a;
    a = "I love Fishc.com!";
    printf("%s\n", a);

    a += 7;    //等价于 a = a+7
    printf("%s\n", a);
}
/**
a=a+7 则a的赋给的地址就是第七个字母的地址(a从0开始)
                     所以打印出来是从第七个字母开始

而对于数组打印出来的单纯就是第七个字母
**/
