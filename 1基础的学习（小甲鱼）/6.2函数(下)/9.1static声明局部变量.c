/**
static   静态变量：有时候希望调用后不释放,就加上存储变量static

从下例考察静态局部变量的值
 auto   使用变量后会自动销毁
 static 使用变量后会保留上一次值
**/
#include <stdio.h>

int f(int a)
{
    auto int b=0; //auto动态存储
    static int c=3;//static静态存储

    b = b + 1; //auto b 会自动释放，所以b一直是1
    c = c + 1; //static c 会保留上一次的值，c会逐渐增1
    return (a+b+c);
}

void main()
{
  int l=2, i;//局部变量
  //两个a不同，这个可以定义任何字母，把a的值传给定义函数 int a

  for(i=0; i<3; i++)
  {
      printf("%d\n", f(l));
  }
}

/**
    b = b + 1; //auto b 会自动销毁，所以b一直是1
    c = c + 1; //static c 会保留上一次的值，c会逐渐增1
    b=1 1 1
    c=4 5 3
**/




