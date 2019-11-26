/* printf格式输出 相比较于 putchar字符输出 功能更强大*/
/* 形式为 printf("格式",赋值量) */
/* %d整型 %f浮点型 %c字符型 */

#include <stdio.h>
void main()
{
    int a=88, b=89;  /* ab都定义为整型基本型a是88 b是89 */
    printf("%d,%d\n", a, b);
    printf("%f,%f\n", a, b);
    printf("%c,%c\n", a, b);
    printf("a=%d,b=%d", a, b);/* ""内除了%d之外都是是要打印出来的 */
                              /* %d%f%c是算出来赋给的量 */
}
