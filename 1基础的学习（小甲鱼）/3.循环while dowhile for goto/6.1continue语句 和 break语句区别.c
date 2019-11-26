/*****
continue语句 形式   continue;
continue语句 作用   结束本次循环，跳出下面语句，在进行下一次循环

break和continue区别 continue是结束本次循环
                    break是终止(跳出)整个循环
*****/
#include <stdio.h>
#include <conio.h>
void main()
{   int r;
    float pi = 3.1415926, area;
    for( r=1; r<=10; r++)
    {
        area=pi*r*r;//圆面积公式
        if(area>100)
        {
            continue;//单步调试6以上时，break直接跳出，continue跳到从头继续开始
        }
        printf("r=%d, area=%f\n",r ,area);
    }
       getch();//加这个，输入一个字符才会结束
}
//
