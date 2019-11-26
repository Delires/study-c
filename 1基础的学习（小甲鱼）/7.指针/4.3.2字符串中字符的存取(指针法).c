/**
字符串中字符两种存取方法:下标法，指针法

指针法举例:将a,b的指针赋给指针变量*p1,*p2.再用*p1,*p2代替a,b取传递字符
**/
#include <stdio.h>

void main()
{
    char a[]="HeMengDi is pig";
    char b[40], *p1, *p2;
    int i;

    p1 = a; //用指针*p1*p2代替a,b去传递
    p2 = b;

    for(; *p1 != '\0'; p1++, p2++)//省略表达式1,不对变量赋初
    {                               //*p1和*p2自增1 相当于*(b+i) = *(a+i)
        *p2 = *p1;
    }
    *p2 = '\0'; //给*p2 b 一个结束符
#if(0)
    for(i=0; *(p1+i) != '\0'; i++)//省略表达式1,不对变量赋初
    {                               //*p1和*p2自增1 相当于*(b+i) = *(a+i)
        *(p2+i) = *(p1+i);
    }
    *(p2+i) = '\0';
#endif

printf("string a is: %s\n", a);
printf("string b is: ");

    for(i=0; b[i] != '\0'; i++)
    {
      printf("%c", b[i]);
    }

}
