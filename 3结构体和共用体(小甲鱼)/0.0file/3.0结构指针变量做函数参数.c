/**
将一个结构体变量的值传递给另一个参数，3种方法
     方法1：用结构体变量的成员做参数
     方法2：用结构体变量做参数
     方法3：用指向结构体变量/数组的指针做实参，将结构体变量/数组的地址传给形参

strcpy()字符串拷贝函数
     strcpy(A,"BCD"); 把字符串BCD拷贝到数组A中
**/
//方法2：用结构体变量做参数赋值给函数
#include <stdio.h>
#include <string.h>

struct student //定义结构体
{
    int num;
    char name[20];
    float score[3];
};

//声明函数
void print(struct student pu);
        //struct student 就相当于 int a 这表明要打印一个结构体

int main(void)
{
    struct student stu; //定义结构体变量

    stu.num = 8;
    strcpy(stu.name, "Fishc.com!"); //用strcpy()字符串拷贝函数，对数组name间接赋值
    stu.score[0] = 98.5;             //stu.name = "Fishc.com!"是错的
    stu.score[1] = 99.0;
    stu.score[2] = 98.5;

    print(stu);//方法2：用结构体变量做参数赋值给函数
}


void print(struct student pu)//定义函数,把stu传递给函数的pu
{
  printf("\tnum=%d\n", pu.num);
  printf("\tname=%s\n",  pu.name);
  printf("\tScore_1=%5.2f\n", pu.score[0]);
  printf("\tScore_2=%5.2f\n", pu.score[1]);
  printf("\tScore_3=%5.2f\n", pu.score[2]);

}
/**
 char name[20];
 strcpy(stu.name, "Fishc.com!");
是将"Fishc.com!"这个值传递给name[20]的栈里，是值传递
 char *name;
 name = "Fishc.com!"
是将"Fishc.com!"这个值的地址传递给name，在*从name里取值的栈里，是地址传递
**/
