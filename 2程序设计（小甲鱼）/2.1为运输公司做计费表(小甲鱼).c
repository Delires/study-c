/*******************************************
运输公司计费表
距离越远费用越低
s<250km         不打折
250<=s<500      2%折扣
500<=s<1000     5%折扣
1000<=s<2000    8%折扣
2000<=s<3000    10%折扣
3000<=s         15%折扣
每吨货物运费p，货重w，距离s，折扣d，
总运费f=p*w*s*(1-d)
*******************************************/
/*用switch语句  必须先定义常值变量c 因为  case 常值变量*/
#include <stdio.h>
void main()
{
  int c, s;   //switch语句 c运来存放可能数 因为 case常量表达式:语句1;break;
  float p, w, d, f;
  printf("输入  每吨运费p, 货重w, 距离s：");
  scanf("%f%f%d", &p, &w, &s);//定义什么 储存&什么
    //f是算出来的值不用输入 折扣d c可能输 直接赋值
    //scanf语句“%d%d%d”输入值之间用空格隔开
    //         “%d,%d,%d”输入值就用逗号隔开
  if(s>=3000)
  {
      c=12;  //s>=3000直接转到switch最后一个语句
  }
  else
  {
      c=s/250;   //因为每个打折范围都是250的倍数
                 //由于定义c为整型int，所以s小于250时c等于0 250<=s<500 等于1 以此类推
  }
  switch(c) //switch(c) case1 case2 case3等等
  {


  case 0:
      d=0; break;
  case 1:
      d=2; break;
  case 2:
  case 3:
      d=5; break;
  case 4:
  case 5:
  case 6:
  case 7:
      d=8; break;
  case 8:
  case 9:
  case 10:
  case 11:
      d=10; break;
  case 12:
      d=15; break;
  }
  f = p*w*s*(1-d/100.0);//定义d是浮点型常数加.0
                      //不一定写d为小数，为正数也行到时候除100即可
  printf("freight=%15.4f\n", f);//%15.4f定义输出常数15位，小数4位
}













