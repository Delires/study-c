/*整型变量有 short/long/int/unsigned/    */
/*区别于 常量   #define PRICE 3；    常量是不变的，变量是变的*/
/*define＋字符  ＋数字 常量字母大写，int short变量字母小写*/


#include <stdio.h>   /*调用stdio.h函数库  用到printf输出输入语句时用此函数 scanf输入语句*/
void main()          /*void空白主函数 结尾不用return0*/
{
    int a, b, c, d;  /*①{b}内的每句话结尾要有；②，后要空一格③int整型变量配小写字母 常量大写字母*/
    unsigned u;      /*adcd为基本型整型变量 u为无符号型整型变量*/
                     /*int有符号 unsigned无符号，有符号＋无符号=有符号*/
    a=12; b=-24; u=10;/*给a b u定义数字 */
    c=a+u;
    d=b+u;     /*c d 定义公式*/
    printf("%d+%d=%d,%d+%d=%d\n", a, u, c, b, u, d);    /*a+u输出整型变量%d 这是c的值*/
                                                        /*b+u输出整型变量%d 这是d的值*/
                                                        /*""里是你自己定义的东西 不要把输出也写到双引号里*/
    /*printf("a+u=%d,b+u=%d\n",c, d);   这个直接显示出来值，不显示a,u,b,u*/
    /*printf("%d+%d=%d,%d+%d=%d\n", a, u, c, b, u, d);不仅显示值也显示a,u,b,u*/
}

