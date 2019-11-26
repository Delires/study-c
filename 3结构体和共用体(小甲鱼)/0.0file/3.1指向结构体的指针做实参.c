/**
将一个结构体变量的值传递给另一个参数，3种方法
     方法1：用结构体变量的成员做参数
     方法2：用结构体变量做参数
     方法3：用指向结构体变量/数组的指针做实参，将结构体变量/数组的地址传给形参

strcpy()字符串拷贝函数
     strcpy(A,"BCD"); 把字符串BCD拷贝到数组A中
**/

#include <stdio.h> //用 指向结构体 的指针 做实参
#include <string.h>

struct student
{
  int num;
  char name[20];
  float score[3];
};


void print(struct student *p); //打印结构体的 取值*
         //用 指向结构体 的指针 做实参
void main()
{
    struct student stu;

    stu.num = 8;
    strcpy(stu.name, "Fish.com");
    stu.score[0] = 98.5;
    stu.score[1] = 98.5;
    stu.score[2] = 99.5;

    print( &stu );  //&传递 结构体的地址

}


void print(struct student *p)//定义函数，把stu的地址传给函数p
{
  printf("\tnum=%d\n", p -> num);
  printf("\tname=%s\n", p -> name);
  printf("\tScore_1=%5.2f\n", p -> score[0]);
  printf("\tScore_2=%5.2f\n", p -> score[1]);
  printf("\tScore_3=%5.2f\n", p -> score[2]);

}
