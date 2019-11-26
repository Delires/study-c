/**
共用体和结构体一样，区别在于共用体每次只能存储一个数

共用体定义
    union 共用体名
    {

       成员列表

    }变量列表;

共用体，结构体，数组可互相嵌套

如若一个表格中存储老师又存储同学信息，就要用共用体。这样再储存老师的就覆盖学生，储存学生就覆盖老师
详见图 0.5.0
**/

/**
此题抓住了共用体只能存储一个变量的特点，要么写入职业，要么写入班级号，二者只能写一个
**/
#include <stdio.h>

struct
{
   int num;
   char name[10];
   char sex;
   char job;
   union //定义共用体，要么写入班级号要么写入职业
   {
        int banji;
        char position[10];
   }category;//声明共用体
}person[2];//声明结构体数组

int main(void)
{
    int i;
    for(i=0; i<2; i++)
    {
      printf("please int put number:");
      scanf("%d", &person[i].num);
                       while (getchar()!='\n') continue;//scanf输入值后遇到\n会出错，要么删除下一句的\n。
                                                 //     要么加入 清除键盘缓冲区数据语句 while (getchar()!='\n') continue;

      printf("please int put name:");
      scanf("%s", &person[i].name);
                      while (getchar()!='\n') continue;

      printf("please int put sex:");
      scanf("%c", &person[i].sex);
                      while (getchar()!='\n') continue;

      printf("please int put job:");
      scanf("%c", &person[i].job);
                      while (getchar()!='\n') continue;


      if(person[i].job == 's' )
      {
        printf("please int put number of class：");
        scanf("%d", &person[i].category.banji);
        printf("\n\n");

      }
      else if(person[i].job == 't')
      {
        printf("please int put profess:");
        scanf("%s", &person[i].category.position);
        printf("\n\n");
      }
      else
      {
        printf("intput error");
      }
    }

    for(i=0; i<2; i++)
    {
        if(person[i].job == 's' )
        {
            printf("num=%d\tname=%s\tsex=%c\t", person[i].num, person[i].name, person[i].sex);
            printf("job=%c\tnbanji=%d\n",person[i].job, person[i].category.banji);
        }
        else
        {
            printf("num=%d\tname=%s\tsex=%c\t", person[i].num, person[i].name, person[i].sex);
            printf("job=%c\tposition=%s\n",person[i].job, person[i].category.position);
        }

    }
}

/**
scanf 接到完值后，最后还有一个 \n, 下次scanf 遇到\n(出错)则会跳过

scanf函数返回成功读入的数据项数，读入数据时遇到了“文件结束”则返回EOF。

清除键盘缓冲区数据
while (getchar()!='\n') continue;
**/
