/**
定义二维数组a[3][4]
输入行和列显示对应元素，超过范围提示出错
**/
#include <stdio.h>
void main()
{
    int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int i, j, row, column;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

   loop: printf("row=");
    scanf("%d", &row);
    printf("column=");
    scanf("%d", &column);


    if(row < 4)//按从1开始对待
    {
        if(column < 5)
        {
            printf("%d\n", a[row-1][column-1]);//行和列统一减1，看起来方便，从1*1开始
        }
        else
        {
            printf("column intput error");//改成 goto loop; 输入错误就重输入
        }
    }
    else
    {
        printf("row intput error");////改成 goto loop; 输入错误就重输入
    }

    goto loop;//用goto语句一直执行程序
}


