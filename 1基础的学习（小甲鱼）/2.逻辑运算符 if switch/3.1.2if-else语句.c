/*
if语句构成分支结构，存在菱形的判断框
if语句的第二种形式：if-else型
          表达式为：if（表达式）
                    {语句1}
                    else
                    {语句2}
真的执行语句1，假的执行语句2
（if基本型是 真的执行语句1，假的直接输出）
*/

#include <stdio.h>
void main()
{
    int a, b;
    printf("input two number\n"); //无意义，打印出冒号中英文即可
    scanf("%d%d", &a, &b);        //输入两个数，存在&a&b中
    if(a>b)
    {
        printf("max=%d\n", a);//if-else语句  if(表达式){语句1}else{语句2}
    }                         //注意if(表达式)后不加,判断不加；只有{}里的语句才加；
    else                      //此程序意思是，输入ab两个数，a大输出a否则输出b
    {
        printf("max=%d\n", b);
    }
}

/* 与上个程序区别是 上个程序用max做媒介，只输出max
                    这个程序没媒介要么输出a 要么输出b
*/
