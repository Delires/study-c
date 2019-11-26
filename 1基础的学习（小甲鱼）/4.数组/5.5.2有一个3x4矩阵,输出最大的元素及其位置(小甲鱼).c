/**
我定义max=0
小甲鱼定义max=a[0][0]
row和ran小甲鱼提前赋0了
**/
#include <stdio.h>
void main()
{
    int i, j, row=0, ran=0, max;
    int a[3][4]={{0,1,2,3},{4,99,6,-7},{8,101,-10,11}};
    max = a[0][0];//假设第一个是最大值,然后逐渐比较
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
                row = i;
                ran = j;
            }
        }
    }
    printf("row=%d,ran=%d\n", row, ran);
    printf("%d", max);
}
