/**
小甲鱼 二维指针
且输入不对就一直循环

按照甲鱼哥的思路写
**/
#include <stdio.h>
void main()
{
    int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int i, j, row, column;

                 //定义二维数组指针
    int (*p)[4]; //(*指针变量名)[长度列]
    p = a;

    for(i=0; i<3; i++)//打印数组
    {
        for(j=0; j<4; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    printf("row=");//输入行，不对就继续输入
    scanf("%d", &row);
    while(row>2 || row<0)//超出行范围就一直循环输入
    {
        printf("row=");
        scanf("%d", &row);
    }

    printf("column=");//输入行，不对就继续输入
    scanf("%d", &column);
    while(column<0 || column>3)//超出行范围就一直循环输入
    {
        printf("column=");
        scanf("%d", &column);
    }

    //打印出行列对应的数
    printf("a[%d][%d]=%d ",row, column, *(*(a+row)+column));//用指针表示数，两个**是数
                                    //(+)+ 括号内加行 括号外加列

}
