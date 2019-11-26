/**
矩阵转秩
把a[2][3]化成b[3][2]
a= 1 2 3      b= 1 4
   4 5 6         2 5
                 3 6

小甲鱼和我一样,两个for循环.这个多打印a，且加入getch(),输入字符，程序才会下一步进行

要点:两个循环，层层转换b[j][i]=a[i][j]
       先转换1行,列+1
       在行+1，列逐渐+1
       在行+1，列逐渐+1
**/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i, j;


    for(i=0; i<=1; i++)//先用两个循环把a[2][3]打印出来
    {
        for(j=0; j<=2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    getch();//程序加这个，只有输入任意字符，程序才会继续运行，但必须要有头文件<conio.h>
    printf("we are ready array! Look\n");

    for(j=0; j<=2; j++)//把a转换成b
    {
        for(i=0; i<=1; i++)
        {
            b[j][i]=a[i][j];
        }
    }

        getch();
        for(j=0; j<=2; j++)//打印出b
    {
        for(i=0; i<=1; i++)
        {
            printf("%d ", b[j][i]);
        }
        printf("\n");
    }




}
