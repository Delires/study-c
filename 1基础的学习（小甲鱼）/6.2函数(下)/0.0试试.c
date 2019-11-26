#include <stdio.h>
int fuck(int a);

void main()
{
    int i=1;
    for(i=1; i<10; i++)
    {
        printf("%d!=%d\n", i, fuck(i));
    }

}

int fuck(int a)
{
    static m=1;//静态变量不给m赋初值就默认为0
    m = m * a; //1, 1*2, 2*3, 6*4
    return m;
}
