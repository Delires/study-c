/****
Fibonacci数列前40个数
数列有如下特点：第1,2两个数十1,1.从第三个开始是前两个的和
即 F(1)=1 F(2)=1 F(3)=F(n-1)+F(n-2)

用循环while或for，如果i不参与运算，就代表循环次数
*****/
#include <stdio.h>
void main()
{
    int i=1 , j=1, k=1, l=0;
    printf("%d\t%d\t", i, j);//直接打印，不写到循环里，免得重复
    while(i<=40)
    {
      l = j+k;
      k = j;
      j = l;
      i++;                //i表示循环次数，超出范围直接跳出
      printf("%d\t", l);

    }
}

/***
1 1 2 3 5 8
j k l
  j k l
    j k l                        k赋值给j l赋值给k
**/
