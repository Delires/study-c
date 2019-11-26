#include <stdio.h>
void main()
{
    int a[5] = {123,25,36,75,87};//定义数组
    int *p1, *p2;
    p1 = &a[0];
    p2 = &a[4];
    printf("%d\n", p2-p1);
    printf("%d\n", a[4]-a[0]);
}
