/****
显示输入字符，如果按ESC键，退出循环
如果按的是Enter键，不做任何处理，继续输入下一个字符

break是跳出循环
continue是跳出此次循环，继续下一次循环

必须有头文件conio.h
putch()输出字符
getch()等待按下任意键，输入一个字符,但不显示。然后执行下面语句
       程序最后加,输入一个字符结束程序(鸡肋,可有可无)
ch=getch()等待按下任意键，把任意键的asc码值赋给ch
*****/
#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    printf("input character is not bespeak\n");
    a=getch();//写到外面，就一直循环输出了，要写到里头
    while(1)//for( ; ;)
    {

        if(a==27)//ESC ASC27
        {
        break;
        }
        else if(a==13)
        {
            continue;//结束本次循环重头开始
        }
        else   //不加else 就是if嵌套结果一样
        {
            putch(a);//由于输入不显示，所以出现的就是输出的
        }
    }
    getch();//程序末尾加，任意输出字符结束
}
