/*
输入三个数，输出max和min
if-else语句可用条件表达式代替 表达式1?表达式2:表达式3 1成立执行2否则执行3
*/
#include <stdio.h>
void main()
{
    int a, b, c, max, min;  //因为要输出max和min 且要用max和min进行比较 所以定义五个数
    printf("input three number\n");
    scanf("%d%d%d", &a, &b, &c);
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    printf("min=%d\nmax=%d", min, max);
}
