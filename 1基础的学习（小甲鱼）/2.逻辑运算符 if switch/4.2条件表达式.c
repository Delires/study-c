/*
此程序输出ab中最大的数
*/

#include <stdio.h>
void main()
{
    int a, b, max; //使用前必须先定义数
    printf("\n input twonumber:");
    scanf("%d%d", &a, &b);     //getchar()字符输入 putchar()字符输出 和char字符型搭配
    printf("max=%d", a>b?a:b); //%d可能是a可能是b
                //  表达式1?2:3 1满足输出2否则3
}

/*
条件运算符优先级小于比较运算符
把a>b换成a<b 或 a>b?a:b换成a>b?b:a 就成了输出最小的那个数
*/
