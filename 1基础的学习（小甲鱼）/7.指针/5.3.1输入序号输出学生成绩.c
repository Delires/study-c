/**
输入序号，输出学生的4门成绩
用函数指针 二维数组 完成
**/
#include <stdio.h>
void main()
{
    double score[3][4] = {{60.0, 70.0, 80.5, 90.0}, {56.0, 89.0, 67.0, 88.0}, {34.2, 78.5, 90.6, 40.0}};
                               //定义二维数组，一维二位行可以省但列必须定义
    double *searcher(double(*pointer)[4], int n );
                               //*sea()数组函数    *pointer[4]二维数组指针定义形式：类型说明符(*指针变量名)[长度]
                                                            //把二维数组看成一维数组去定义，列就是一维数组宽度
    double *p;
    int i, m;

    printf("please intput number of student:");
    scanf("%d", &m);
    printf("the score of No.%d\n", m);

    p = searcher(score, m);//p收到pt地址的返回值

    for(i=0; i<4; i++)           //打印出来4科成绩
    {
        printf( "%f\t", *(p+i) );//p=pl=*(m+n), 所以 *(p+i)==*(*(m+n)+i) 括号外加所以加的是列
    }                                                //所以打印出来的每一个的各科成绩
    printf("\n\n\n");
}

double *searcher(double(*pointer)[4], int n )//把数组score传递给pointer(数组从0的地址开始)  把同学序号m传递给n
{
    double *pt;
    pt = *(pointer + n);         //二维数组括号里加行，pointer从0行开始，再加行数n
    return pt;                  //之后再把值pt返回(存储的是地址)
}
