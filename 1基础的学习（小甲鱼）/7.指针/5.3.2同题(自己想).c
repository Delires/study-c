/**
输入序号，输出学生的4门成绩
函数指针 *p = max;
二维数组指针定义：类型说明符(*指针变量名)[长度]   把二维数组按一维定义，括号里加改变行，括号外加改变列
**/
#include <stdio.h>

void main()
{
    double a[3][4] = {{15.0,26.3,78.5,55.2},{55.2,49.3,78.2,99.5},{12.0,89.6,75.6,33.8}};
    double *fuck( double(*m)[4], int n );
    // double *fuck() 定义函数指针       double(*m)[4] 定义二维数组指针
    double *p;//定义指针变量p
    int m, i;

    printf("pleae int put number:\n");
    scanf("%d", &m);

    p = fuck(a, m); //带入函数,把pl返回给p
    for(i=0; i<4; i++)
    {
        printf("%f\t", *(p+i));   //p=pl=*(m+n), 所以 *(p+i)==*(*(m+n)+i) 括号外加所以加的是列
                                                //所以打印出来的每一个人的各科成绩
    }
    printf("\n\n");

}
double *fuck( double(*m)[4], int n )
{
    double *pl;
    pl = *(m+n);   //m是数组a的行地址，n是行数
    return pl;
}
