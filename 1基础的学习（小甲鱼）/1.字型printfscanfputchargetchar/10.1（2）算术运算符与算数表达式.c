#include <stdio.h>
void main()
{
    printf("100/3=%d...%d", 100/3, 100%3);   /* %d 整型显示 */
}

/* printf("",) 冒号里是你要打印出来的，冒号里的%d是由 逗号后面*/

/* \n转义字符 代表换行 */
/* % 符号 算余数的 100/3余1 */
/* % 符号必须对应%d 因为余数是整型 不是浮点型 */
