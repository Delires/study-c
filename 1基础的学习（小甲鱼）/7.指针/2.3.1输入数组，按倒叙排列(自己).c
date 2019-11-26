/**
a[10]={3,7,9,11,0,6,7,5,4,2}
将数组a的数按反方向存放

**/
#include <stdio.h>
int rever(int m[10]);//n一般代表数组宽度 (int m[], int n)
                            //直接定义数组宽度，就可以省略 (int m[10])
int z;

void main()
{
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    int i;

    z = rever(a);

    for (i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }

}

int rever(int m[10])
{
    int o, i;
    for(i=0; i<=4; i++)
    {
         o = m[i];
        m[i] = m[9-i];
        m[9-i] = o;
    }
    return z;
}
/**
定义数组a[]函数时
引用数组时是 函数(数组名) 不带[]
          如 rever(a)对  rever(a[10])错
**/
