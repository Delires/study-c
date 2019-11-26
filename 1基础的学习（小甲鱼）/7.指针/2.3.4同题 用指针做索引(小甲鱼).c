
#include <stdio.h>
void rever(int *x, int n);
void main()
{
    int i, a[10]={3,7,9,11,0,6,7,5,4,2};

    rever(a, 10);

    for(i=0; i<10; i++)
     {
        printf("%d ", *(a+i));
     }
}

void rever(int *x, int n)
{
    int *p, temp, *i, *j, m;

    m=(n-1)/2;
    i=x;//x数组首元素地址
    j=x+n-1;//x数组末元素地址
    p=x+m;//x中间的那个元素

    for( ; i<=p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;

    }
}


