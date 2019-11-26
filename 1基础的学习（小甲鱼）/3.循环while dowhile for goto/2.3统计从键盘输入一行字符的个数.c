/*************
统计 从键盘输入一行字符 这一行字符的个数
*****************/
#include <stdio.h>
void main()
{
    int n=0;       //用循环必须定义初始值为0
    printf("input a string\n");
    while(getchar()!='\n')  //只要输入的字符没有回车，n就加1，当字符有回车，就不在循环
    {
        n++;   //n就对输入字符计数
    }
printf("%d\n", n);
}
