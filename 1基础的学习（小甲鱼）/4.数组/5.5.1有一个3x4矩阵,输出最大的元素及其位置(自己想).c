/**
有一个3x4矩阵,输出最大的元素及其位置
提示：一千做过一个输出一维最大数
**/
#include <stdio.h>
void main()
{
    int a[3][4]={{0,1,2,3},{4,99,6,7},{8,9,10,11}};
      //3*4先赋值后面的行
    int i, j, max=0, row, ran; //row行 rank列
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=3; j++)
        {
            if (a[i][j]>max)
            {
                max = a[i][j];
                row =i;
                ran =j;
            }
        }
    }
    printf("row=%d\t, ran=%d\t\n", i, j);
    printf("%d\n",max);
}
