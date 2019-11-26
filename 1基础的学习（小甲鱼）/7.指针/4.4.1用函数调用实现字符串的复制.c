/**
定义一个函数，来实现字符串的复制。 指针法 和 下标法

把a字符串复制到b的同时也覆盖字符串(直接复制过去就自动覆盖了)
此题用下标法a[i]
**/
#include <stdio.h>
char duplicate(char from[], char to[]);//声明函数
char z;                                //记得定义括号内变量类型
void main()
{
    char a[] = "I am a teacher";
    char b[] = "You are my stduent";
    printf("%s\n", a);
    printf("%s\n", b);

    z = duplicate(a, b);//使用函数不加[]

    printf("%s\n", a);
    printf("%s", b);
}
char duplicate(char from[], char to[])//定义函数，a,b传递给frome,to
{
    int i=0; //i要赋初值，不然不会从头开始赋值
    while(from[i] != '\0') //while()里是循环条件
    {                      //a赋值给b，一直到a结束到'\0'
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';//最后补个停止符,b多的字符也会自动消失
    return z;
}
/**
i 要赋初值，不然不会从头开始赋值
要在数组赋值结束后 补'\0',不然会自动补一堆乱码
**/
