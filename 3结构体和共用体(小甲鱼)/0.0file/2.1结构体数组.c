/**
结构体数组
    假设一个结构体里存放着一个学生的年龄姓名身高等数据。
    如果有十个学生，则就是十个结构体数据，这十个结构体就构成了一组数组。
    结构体数组，就是数组的每个数组元素都是一个结构体。
**/
#if(0)

#include <stdio.h>

#define NUM 3

struct person  //定义一小结构体
{
    char name[20];
    char phone[10];
};

int main(void)
{
    struct person man[NUM]; //声明man数组的结构体
    int i;

    for(i=0; i<NUM; i++)
    {
      printf("intput name:\n");
      gets(man[i].name);   //gets()函数，输入一段字符放入流中
      printf("intput phone:\n");
      gets(man[i].phone);
    }

    printf("\t\tname\t\t\t\t\tphone\n\n");    // \t水平制表符

    for(i=0; i<NUM; i++)
    {
      printf("%20s\t\t\t%20s\n", man[i].name, man[i].phone);
    }

    return 0;
}


#endif









#if(1) //自己写写

#include <stdio.h>

#define SUM 3
struct contact
{
    char name[20];   //想间接给数组写数据，要么*，要么用函数输入
    char phone[20];
};

int main(void)
{
  struct contact tell[SUM];  //声明数组结构体
  int i;
  for(i=0; i<SUM; i++)//逐个写入数据给数组的每个结构体
  {
      printf("intput name:\n");
      gets(tell[i].name);
      printf("intput phone:\n");
      gets(tell[i].phone);
  }

  printf("\t\tname\t\t\tphone\n");

  for(i=0; i<SUM; i++)
  {
      printf("\t%10s\t%10s\n", tell[i].name, tell[i].phone);
  }

 return 0;
}

#endif
