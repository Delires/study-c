#include <stdio.h>
void main()
{
    char a, b, c;  /* 定义abc为字符型数据 */
    printf("input a character\n");
    scanf("%c %c %c", &a, &b, &c);
    printf("%d%d%d\n", a, b, c); /*%c输入字符串 %d输出asc码*/
    printf("%c%c%c\n", a-32, b-32, c-32);/*asc码 大写+32=小写*/
                                         /*%c 输出又是字符串*/
}
/*%c字符串输出输入 本质上是asc码数字的运算 */
/* char字符串，空格也算一个asc码不能打空格，除非scanf的 %c之间有空格 */
