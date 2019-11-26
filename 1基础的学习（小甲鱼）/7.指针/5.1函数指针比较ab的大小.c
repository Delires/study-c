/**
原来我们通过定义一个函数来比较ab的大小
现在通过定义函数的指针来比较ab的大小

当函数在编译时就被分配一个入口地址,此地址就是函数的指针
**/
#include <stdio.h>
int max(int x, int y)//把函数放在最前头定义,因为编译器是从上往下看,所以省去声明
{
    int z;
    if(x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;//把z这个值返回，不是返回到z
             //如果返回多个变量，就不写返回语句
}

#if(0) //宏定义，预处理命令.相当于一个开关,从而决定编译哪段代码
//普通法
void main()
{
    int a, b, c;

    printf("please intput two numbers:\n");
    scanf("%d %d", &a, &b);

    c = max(a, b);
    printf("a=%d b=%d max=%d", a, b, c);
}
#endif

#if(1)// if(0)关上开关  if(1)打开开关
//指针法
void main()
{
  int (*p)(); //定义函数指针,*以表敬意
  int a, b, c;

  p = &max;    //把函数指针(入口地址)的值 赋给 p
  scanf("%d %d", &a, &b);

  c = (*p)(a, b); //*p提取p地址处的函数
  printf("a=%d b=%d max=%d", a, b, c);
}
#endif
