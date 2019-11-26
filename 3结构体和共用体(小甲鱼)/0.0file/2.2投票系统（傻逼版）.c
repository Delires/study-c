/**
设计一个投票系统，共5人，可输入十次姓名，最后统计出谁是傻逼

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
    char str[]="日月与卿", str1[]="寒王", str2[]="giao哥", str3[]="铁子", str4[]="我";
                  //必须先定义这些字符串才能比较


    printf("欢迎进入傻逼投票系统\n");
    printf("本次参选人员有日月与卿，寒王，giao哥，铁子，我\n");
    for(i=0; i<10; i++)
    {
        printf("请输入第%d次投票姓名:", i+1);
        scanf("%s", &hxs[i].name);
    }


    for(i=0; i<10; i++) //计算票数
    {
     if(strcmp(hxs[i].name, "日月与卿")==0)    //比较字符串，要用字符串比较函数strcmp 直接比较if(hxs[i].name == "l")是错的！
     {
        a++;
     }
     else if(strcmp(hxs[i].name, "寒王")==0)
     {
        b++;
     }
     else if(strcmp(hxs[i].name, "giao哥")==0)
     {
        c++;
     }
     else if(strcmp(hxs[i].name, "铁子")==0)
     {
        d++;
     }
     else if(strcmp(hxs[i].name, "我")==0)
     {
        e++;
     }
    }

    printf("\n\n");
    printf("日月与卿票数是:%d\n", a);//打印出每个人票数结果
    printf("寒王票数是:%d\n", b);
    printf("giao哥票数是:%d\n", c);
    printf("铁子票数是:%d\n", d);
    printf("我票数是:%d\n", e);

    printf("\n");
    sum=compare(a, b , c, d, e); //调用函数找出最大值
    if(sum==a)//打印出冠军，数字可直接比较字符串不行
    {
      printf("日月与卿是傻逼");
    }
    else if(sum==b)
    {
      printf("giao哥是傻逼");
    }
    else if(sum==c)
    {
      printf("铁子是傻逼");
    }
    else if(sum==d)
    {
      printf("圆月是傻逼");
    }
    else if(sum==e)
    {
      printf("我是傻逼");
    }


}

