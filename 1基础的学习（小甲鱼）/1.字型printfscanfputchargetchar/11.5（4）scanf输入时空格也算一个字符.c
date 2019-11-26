#include <stdio.h>
void main()
{
    char a, b;
    printf("input character a,b\n");
    scanf("%c %c", &a, &b);
    printf("%c %c", a, b); /* 储存地为&a&b 再把ab打印出来 */
}
/* 输入定义为字符%c，有对应asc码，所以在输入数据时“空格键”也算一个字符*/
/* 所以输入数据时 M N 输出结果只有M ,只有输入MN时，输出才是MN  */
/* 但是把%c%c换成%c %c时，空格就不会被识别成asc码 */
/* 定义成整型%d也不会出现这种情况 */
