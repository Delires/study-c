/**
字符串中字符两种存取方法:下标法，指针法

下标法举例:直接用a代表首地址,用*b代替值的传输
**/

#include <stdio.h>
void main()
{
    char a[] = "HeMengDi is pig";
    char b[40];
    int i;

    for(i=0; *(a+i) != '\0'; i++)//'\0'是字符结束的标志，只要a数组最后一个元素不是 '\0'就一直把a赋值给b
    {                            //a是地址 *a是取值
        *(b+i) = *(a+i);//a代替*p1
    }
    *(b+i) = '\0'; //手动给b数组补上\0(结束符),如果不补就不会结束乱码了(一直打印到40个随机数据)

    printf("string a is :%s\n", a);//打印a
    printf("string b is :");
    for(i=0; b[i] != '\0'; i++)//用数组方式打印b
    {
        printf("%c", b[i]);//或把b[i]换成b
    }
}
