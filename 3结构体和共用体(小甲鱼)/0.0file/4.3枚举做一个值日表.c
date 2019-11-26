/**
枚举做一个值日表，枚举即取值只能在枚举范围内取值
**/
#if(1)
#include <stdio.h>

int main(void)
{
    enum boy{Tom, Danny, Gan, Lilei}month[31], j;
                                 //声明month[31] j为枚举变量。数组和变量都只能在这4个人里取值
    int i;

    j = Tom; //枚举变量赋值，其实赋值了序号0

    for(i=1; i<=30; i++)
    {
        month[i] = j; //month数组赋值枚举里的各个变量
        j++;//此处很妙，枚举其实是序号，用中间变量代替枚举间接赋值

      if( j > Lilei)
      {
        j = Tom;  //j自加到序号最大的那个在重新从0开始
      }
    }


    for(i=1; i<=30; i++) //打印出来
    {
       switch( month[i] )
       {
        case Tom:printf("%4d %s\t", i, "Tom"); //枚举内容打印要写出打印的值
                 break;
        case Danny:printf("%4d %s\t", i, "Danny"); //枚举打印 要赋值"Danny"
                 break;
        case Gan:printf("%4d %s\t", i, "Gan"); //枚举打印 要赋值"Danny"
                 break;
        case Lilei:printf("%4d %s\t", i, "Lilei"); //枚举打印 要赋值"Danny"
                 break;
        default:
                 break;
        }
     }
    printf("\n\n");

    return 0;
}
#endif



#if(0)

#include <stdio.h>
int main(void)
{
    enum{HengMengDi, fanbingbing, TDS, CangJingKong, BDYJY, LY, LYF} xuanxiu[30], j;
                            //看他们是字，其实它们都是序号
                            //枚举的定义必须是英文
    int i;//循环赋值
    j = HengMengDi;

    for(i=0; i<30; i++)
    {
      xuanxiu[i] = j;
      j++;

      if(j>LYF)
      {
          j = HengMengDi; //赋值完毕
      }
    }

    printf("曹鹏祥一月陪睡列表如下\n");

    for(i=1; i<30; i++)
    {
        switch(xuanxiu[i])
        {
            case HengMengDi:printf("%4d %s", i, "何梦迪");  //打印随便打印 打印啥都可以，枚举的定义必须是英文
                        break;
            case fanbingbing:printf("%4d %s", i, "范冰冰");
                        break;
            case TDS:printf("%4d %s", i, "他大嫂");
                        break;
            case CangJingKong:printf("%4d %s", i, "波多野结衣"); //打印随便打印 打印啥都可以,如果要比较字符串必须提前定义
                        break;
            case BDYJY:printf("%4d %s", i, "柳岩");
                        break;
            case LY:printf("%4d %s", i, "苍井空");
                        break;
            case LYF:printf("%4d %s\n", i, "刘亦菲");
                        break;
        }
    }
    printf("\n\n");
    return 0;
}

#endif




