#include <stdio.h> /*#include*/
void main()
{
    short  a, b; /*short 改为 int 输出值会不同*/
    a = 32767;
    b =  a+1;
    printf("%d, h%d\n",  a ,b);   /*printf("\n", d, c)*/
}

/*如果是 int a, b 输出为 a=32767 b=32768*/
/*如果是 short a, b 输出为 a=32767 b=-32768*/
/*这就是所谓的“数据溢出”*/
/*在codeblocke编译器里 int占4type 4*8=32bit 2^32 =4294967296 分一半刚好包含32768*/
/*short占2type 2*8＝16 2^16=65536 分一半-32678~32677 不包括32678 所以数据溢出  */
/*int/short/long/unsigned 无法储存超过其范围的数*/
