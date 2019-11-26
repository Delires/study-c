/**
我甲鱼哥很聪明
    我是 if((i+j)%2!=0||(i%2!=0&&j%2!=0))
甲鱼哥是 if(i==1||j==1)
**/
#include <stdio.h>
void main()
{
    int a[3][3]; //先定义二维数组的长度
    int i, j;
    printf("please intput nine number\n");

    for(i=0; i<3; i++) //用循环动态赋值
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<=2; i++)//i<=2和i<3是一样的
    {                  //找输出位置的规律
        for(j=0; j<=2; j++)
            {
                if(i==1||j==1) //输出部分坐标,i或j是1
                {
                    printf("%d ", a[i][j]);
                }
                else
                {
                    printf("  ");
                }

            }
        printf("\n");//每显示完一行就换行
    }
}
