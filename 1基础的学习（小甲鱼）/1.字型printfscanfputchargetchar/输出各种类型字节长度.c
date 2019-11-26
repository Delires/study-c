#include <stdio.h>
void main()
{
    int a;    /* a为整型基本型 */
    long b;   /* b为整型长整型 */
    float f;  /* f为浮点型单精度 */
    double d; /* d为浮点型双精度 */
    char c;   /* c为字符型       */
    printf("\n int:%d\n long:%d\n float:%d\n double:%d\n char:%d\n",
            sizeof(a), sizeof(b), sizeof(f), sizeof(d), sizeof(c));
            /* 一句只要没；就不算结束，所以可以分两行写*/
            /* printf冒号里有空格就要打印出空格 */
}
/* sizeof() 字符长度函数 打印出来的数即是几个字节 1byte=8bit */
/* printf冒号里 %d是定义的数 \n是回车键 其余都是要打印出来的 */
