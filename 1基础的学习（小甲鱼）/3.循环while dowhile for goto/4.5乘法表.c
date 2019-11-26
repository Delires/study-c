/*********
输出 乘法表
**********/
#include <stdio.h>
void main()
{
    for(int i=1; i<=9; i++)  //直接在for语句里定义整型
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d*%d=%d\t", i, j, i*j); //\t空格
        }
        printf("\n");                        //\n 这个printf在第二个for语句后面，即内循环执行完换行
    }
}
/*
i=1时 执行第二个for语句，一直到1
i=2时 执行第二个for语句，一直到2
i=3时 执行第二个for语句，一直到3
i=4时 执行第二个for语句，一直到4
以此类推

*/
