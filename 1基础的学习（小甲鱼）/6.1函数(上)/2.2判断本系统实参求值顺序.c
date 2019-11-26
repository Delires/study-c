/**
如果实参列表含多个实参且对求值顺序不确定的话，则看系统是按什么顺序对实参求值，
有的系统是 从右到左 如cdecl,stdcall
有的系统是 从左到右 如pascial

此题就是判断本机的求参顺序
**/
#include <stdio.h>
void main()
{
    int f(int a, int b);//调用函数int f()
    int i=2, p;
    p=f(i, ++i);  //把f的值赋给p ++i,把i的值先自增1在运算
                  //如果自左向右求实参 函数调用为p=f(2, 3)
                  //如果自右向左求实参 函数调用为p=f(3, 3)
    printf("%d\n", p);
}

int f(int a, int b) //定义int f()函数，好被main()引用
                    //把i赋给a，把++i赋给b
{
    int c;
    if(a > b)
    {
        c = 1;
    }
    else if( a == b)
    {
        c = 0;
    }
    else //b>a
    {
        c = -1;
    }
    return c;      //把c的值赋给 int f

}
/**
把c的值赋给 int f
把f的值赋给p

i,++i是实参，a,b是形参，把实参赋给形参
把i赋给a，把++i赋给b

程序中如果a=b 输出c=0 则证明实参求值顺序从右向左 f(i, i++)=f(3, 3)
      如果a<b 输出c=-1 证明实参求求值顺序从左向右 f(i, i++)=f(2, 3)
      切记 a=i b=++i p=算出来的c
**/
