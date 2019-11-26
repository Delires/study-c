/* 求ax²+bx+c=0的根，a,b,c由键盘输入 */
/* x1,x2=-b±√b²-4ac/2a  */
/* p=-b/2a q=√b²-4ac/2a */
/* x1=p+q  x2=p-q       */
#include <math.h>
#include <stdio.h>
void main()
{
    double a, b, c, disc, p, q, x1, x2; /*定义各变量为double型 disc是b²-4ac */
    scanf("%f%f%f", &a, &b, &c);        /*输入adc*/
    disc = b*b-4*a*c;                   /*把分子当作一个整体dsic 注意运算优先级*/
    p = -b/(2*a);                       /*2*a不是2a 不能简写 记得带括号*/
    q = sqrt(disc)/(2*a);               /*sqrt()根号*/
    x1 = p+q;
    x2 = p-q;
    printf("\nx1=%5.2f\nx2=%5.2f", x1, x2);
    /* 定义x1x2为%5.2f，实数5位小数2位  \n回车 */

}
