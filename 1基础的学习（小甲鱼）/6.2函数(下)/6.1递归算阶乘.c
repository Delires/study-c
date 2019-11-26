/**
递归:在调用有个函数的过程中又调用这个函数本身，无限循环
     一旦满足退出条件，就退出。退出条件一般是if判断语句
例如:int f(int x)
     {
     int y, z;
     z=f(y);    //又一次调用函数本身
     return(2*z);
     }

本题目用递归算上题的阶乘s=(2^2)!+(3^2)!
如5!等于4!*5,而4!=3!*4
可用下面递归公式表示:
          n=1        (n=0,1)
          n*(n-1)!   (n>1)
**/

#include <stdio.h>
int recurison(int n);//先声明函数

void main()
{
  int n, result;
  printf("please a number :\n");
  scanf("%d", &n);
  result = recursion(n);
  printf("%d! = %d", n, result);
}

int recursion(int n)//定义函数，核心是递归
{
    int temp;//temp 临时
    if(n < 0)//if-elseif-else语句
    {
        printf("intput error");
    }
    else if(n == 0 || n == 1)//退出条件
    {
        temp = 1;
        return temp;//return 返回给运用这个公式算出的结果
    }
    else
    {
        temp = recursion(n-1)*n;//递归，无限运用公式，满足条件退出
        return temp;
    }


}









