/****
显示输入字符，如果按ESC键，退出循环
如果按的是Enter键，不做任何处理，继续输入下一个字符

break是跳出循环
continue是跳出此次循环，继续下一次循环

putch()输出字符
getch()等待按下任意键，输入一个字符,但不显示。然后执行下面语句
       程序最后加,输入一个字符结束程序(鸡肋,可有可无)
ch=getch()等待按下任意键，把任意键的asc码值赋给ch
*****/
#include <stdio.h>
#include <conio.h>
void main()
{
    char a; //定义字符变量,本质是ASC码的数值
    printf("please intpit a chacracter but not bespeak\n");
    while(1) //相当于for( ; ; )
    {
        a=getch();//getcha()输入一个字符但不显示
        if(a==27)//Esc的asc码是27
        {
            break;//break只对循环起作用
        }
        if(a==13)//Enter缩写CR的asc码是13
        {        //if嵌套
            continue;//continue结束此次循环重新开始

        }

          putch(a);//由于输入得时候不显示，所以一打字符立马显示，显示的是输出的这个
    }
    getch();//输入esc直接跳出循环
            //加这个，输入一个字符才会结束

}
