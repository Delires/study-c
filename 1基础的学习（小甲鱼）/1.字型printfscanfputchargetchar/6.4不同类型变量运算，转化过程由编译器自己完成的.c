#include <stdio.h>
void main()
{
    long x, y;
    int a, b, c, d;
    x = 5;
    y = 8;
    a = 7;
    b = 8;
    c = x+a;
    d = y+b;
    printf("x+a=%d,y+b=%d\n", c, d);/*�ɳ��Ի��� printf("%d+%d=%d,%d+%d=%d\n",x, a, c, y, b, d);  */
}


/*x,y����Ϊ��������������long*/
/*a,b,c,d����Ϊ��������������int*/
/*���ֲ�ͬ���͵����ͱ������㣬���������Լ��������еĹ�����Ľ���*/
