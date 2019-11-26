/**
首先要有排错功能，输入不是字母重新输入
字母都是以ASC码的形式储存，位运算改变ASC码
如A 0100 0001    B 0100 0010
  a 0110 0001    b 0110 0010
大写转换小写
            A~O 高四位0100变为0110  11011111
            P~Z 高四位0101变为0111

特别注意！必须把二进制化为十进制数才能&|运算
**/
#include <stdio.h>
int main(void)
{
    char charact, change;
loop:

    printf("please intput a character:");
    scanf("%c", &charact);
    if( (64<charact&&charact<91) || (96<charact&&charact<123) ) //或('A'<charact&&charact<'Z') || ('a'<charact&&charact<'z')
    {
        if(64<charact&&charact<91)
        {
            change = 32|charact;     //必须把二进制化为十进制数才能&|
            printf("%c\n", change);
        }
        else if('a'<=charact&&charact<='z')
        {
            change = 223&charact;
            printf("%c\n", change);
        }
    }
    else
    {
        printf("You are foolish\n");
    }

    // charact = getchar(); //回车也是一个字符也有对应asc码
    // putchar(charact);    //语句用于吸收输入完回车的asc码

    fflush(stdin);          //使用清楚缓存区函数，把回车清除了
    goto loop;
             //goto语句要写在变量声明后

}

/**直接用第五位判断
if(ch&32)

**/
