#include <stdio.h>

void
 exchange(int *m, int *n);//声明函数,变量要和常量个数相等
            //定义的时候声明指针变量要有*
void main()
{
    int a, b;
    int *p1, *p2;

    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;//定义时*
    if(a<b)
    {
        exchange(p1, p2);//对p1，p2使用函数
    }
    printf("%d %d\n", a, b);
    printf("max=%d min=%d\n", *p1, *p2);
}
void exchange(int *m, int *n)//定义函数
            //p1f赋给m p2赋给n
{
    int p;
    p=*m; //p=a
    *m=*n;//a=b
    *n=p;//b=p=a

}
