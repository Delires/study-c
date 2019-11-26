/*
此程序是计算机程序的一部分
用户输入运算数和四则运算符，输出计算结果。就是表达计算器的四则运算
用switch语句
*/
#include <stdio.h>
void main()
{
    double a, c;
    char  b;
    printf("intput the experssion:a/(*-+)c\n");
    scanf("%lf%c%lf", &a, &b, &c);
    switch(b)
    {
        case'+':printf("%lf", a+c);break;
        case'-':printf("%lf", a-c);break;
        case'*':printf("%lf", a*c);break;
        case'/':printf("%lf", a/c);break;
        default:printf("input error");
    }
}
