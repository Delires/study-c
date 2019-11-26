/**
间接寻址
**/
#include <stdio.h>

void main()
{
     char *name[] = {"Fish.com", "www.fish.com", "home.fishi.com","thank you"};
                   //指针数组*name每一个数组元素 指向 字符串的首地址
                   //char *name 第1个指针元素指向"Fish.com"的首地址,第2个指针元素指向"www.fish.com"的首地址，依次类推
                   //字符串通常不写长度，即char *name[] 写成char *name[4]也行
     char **p;
            //定义一个 指向指针 的指针
            //**p指向指针*p，指针*p又指向一个变量
     int i;

     for(i=0; i<4; i++)
     {
         p = name + i; //指针变量name的值 赋给 指向指针变量的指针
         printf("%s\n", *p);//本来直接取指针name的值，由于name赋值给p，所以取p的值==取name的值
                                                //是一个间接寻址的过程

     }
}
