/*
此程序是计算机程序的一部分
用户输入运算数和四则运算符，输出计算结果。就是表达计算器的四则运算
用switch语句
*/
#include <stdio.h>
void main()
{
    float a, b;   //单精度float对应%f 双精度double对应%if
    char c;
    printf("input experssion:a+(-,*,/)\n");//a+(-*/)告诉你符号可以有四个选择
    scanf("%f%c%f", &a, &c, &b);     //有字符型 不能打空格 空格也算一个字符
    switch(c)
    {
        case'+':printf("%f\n", a+b);break; //没有break跳出就会一直执行下去
        case'-':printf("%f\n", a-b);break;
        case'*':printf("%f\n", a*b);break;
        case'/':printf("%f\n", a/b);break;
        default:printf("input error\n");
    }
}
