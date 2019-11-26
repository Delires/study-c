/**
因为我定义了数组宽度 所以 int rever(int m[10]);
            我使用函数   rever(a);
小甲鱼未定义数组宽度 所以 int rever(int m[], int n);  n代表数组宽度
            小甲鱼使用函数 rever(a, 10);

注意:数组使用函数只用变量名
      rever(a, 10) 对    rever(a[10], 10) 错
**/
#include <stdio.h>
int rever(int x[10], int n);
int z;

void main()
{
    int a[10]={3,7,9,11,0,6,7,5,4,2};
    int i;

    z = rever(a, 10);//把数组名带进去就ok，不用带[]

    for (i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }

}

int rever(int x[10], int n)
{
    int temp, i, j, m;
    m=(n-1)/2;
    for(i=0; i<=m; i++)
    {
        j = n-1-i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    return z;
}
