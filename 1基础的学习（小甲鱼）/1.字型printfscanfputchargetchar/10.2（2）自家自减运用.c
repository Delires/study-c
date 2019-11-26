#include <stdio.h>
void main()
{
    int i = 5, j = 5, p, q;
    p = (i++)+(i++)+(i++); /*先运算 再加   5＋6＋7=18 */
    q = (++j)+(++j)+(++j);/* 先加 在运算   6＋7＋8=22 */
    printf("%d  %d\n%2d %2d", p, q, i, j);  /*i j都是加了三次 ＝8*/
}

/* i,j是变量，i++后,i就变成6去运算了 */
