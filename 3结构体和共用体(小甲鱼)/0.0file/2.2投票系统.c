/**
设计一个投票系统，共4人，可输入十次姓名，最后统计出得票最高的

串比较函数：int strcmp(char *str1, char *str2);  <string.h>
**/

#include <stdio.h>
#include <string.h>
struct toupiao//声明结构体变量放名字
{
    char name[20];
};

int compare(int i, int j ,int k, int l, int m)//比大小函数
{
   int p;
   p=(i>j)?i:j;
   p=(p>k)?p:k;
   p=(p>l)?p:l;
   p=(p>m)?p:m;

   return p;
}

int main(void)
{
    struct toupiao hxs[10]; //输入的姓名
    int a=0, b=0, c=0, d=0, e=0;//统计次数
    int sum;
    int i ;                                   //循环
    char str[]="何梦迪", str1[]="曹鹏祥", str2[]="梦吃", str3[]="梦可", str4[]="圆月";
                  //必须先定义这些字符串才能比较


    printf("欢迎进入好学生投票系统\n");
    printf("本次参选人员有何梦迪，曹鹏祥，梦吃，梦可，圆月\n");
    for(i=0; i<10; i++)
    {
        printf("请输入第%d次投票姓名:", i+1);
        scanf("%s", &hxs[i].name);
    }


    for(i=0; i<10; i++) //计算票数
    {
     if(strcmp(hxs[i].name, "何梦迪")==0)    //比较字符串，要用字符串比较函数strcmp 直接比较if(hxs[i].name == "l")是错的！
     {
        a++;
     }
     else if(strcmp(hxs[i].name, "曹鹏祥")==0)
     {
        b++;
     }
     else if(strcmp(hxs[i].name, "梦吃")==0)
     {
        c++;
     }
     else if(strcmp(hxs[i].name, "圆月")==0)
     {
        d++;
     }
     else if(strcmp(hxs[i].name, "梦可")==0)
     {
        e++;
     }
    }

    printf("\n\n");
    printf("何梦迪票数是:%d\n", a);//打印出每个人票数结果
    printf("曹鹏祥票数是:%d\n", b);
    printf("梦吃票数是:%d\n", c);
    printf("圆月票数是:%d\n", d);
    printf("梦可票数是:%d\n", e);

    printf("\n");
    sum=compare(a, b , c, d, e); //调用函数找出最大值
    if(sum==a)//打印出冠军，数字可直接比较字符串不行
    {
      printf("何梦迪是最佳学生");
    }
    else if(sum==b)
    {
      printf("曹鹏祥是最佳学生");
    }
    else if(sum==c)
    {
      printf("梦吃是最佳学生");
    }
    else if(sum==d)
    {
      printf("圆月是最佳学生");
    }
    else if(sum==e)
    {
      printf("梦可是最佳学生");
    }


}



#if(0)//错误师范
for(i=0; i<10; i++) //判断数组里谁的得票多
    {
        if(hxs[i].name=="何梦迪")  /根本没定义何梦迪，怎么比较？？！！！
        {
          a=a+1;
        }
        else if(hxs[i].name=="曹鹏祥")
        {
          b++;
        }
        else if(hxs[i].name=="梦可")
        {
          c++;
        }
        else if(hxs[i].name=="梦吃")
        {
          d++;
        }
        else if(hxs[i].name=="圆月")
        {
          e++;
        }
    }
#endif




