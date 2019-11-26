/**************************************
输入某年某月某日，判断是这一年的第几天
思路:以3月5日为例，应该先把前两个月的加起来，然后在加上5，即是本年的第几天，闰年考虑多加一天
***************************************/
/*switch 语句*/
#include <stdio.h>
void main()
{   int y,a, b, m;
    printf("input a month and day:");
    scanf("%d%d%d", &y, &a, &b);
    if(y%4==0&&y%100!=0)
    {
    switch(a)
    {
    case 1: m=31+b;                                     break;
    case 2: m=31+29+b;                                  break;
    case 3: m=31+29+31+b;                               break;
    case 4: m=31+29+31+30+b;                            break;
    case 5: m=31+29+31+30+31+b;                         break;
    case 6: m=31+29+31+30+31+30+b;                      break;
    case 7: m=31+29+31+30+31+30+31+b;                   break;
    case 8: m=31+29+31+30+31+30+31+30+b;                break;
    case 9: m=31+29+31+30+31+30+31+30+31+b;             break;
    case 10: m=31+29+31+30+31+30+31+30+31+30+b;         break;
    case 11: m=31+29+31+30+31+30+31+30+31+30+31+b;      break;
    case 12: m=31+29+31+30+31+30+31+30+31+30+31+30+b;   break;
    }
    }
    else
    {
          switch(a)
    {
    case 1: m=31+b;                                     break;
    case 2: m=31+28+b;                                  break;
    case 3: m=31+28+31+b;                               break;
    case 4: m=31+28+31+30+b;                            break;
    case 5: m=31+28+31+30+31+b;                         break;
    case 6: m=31+28+31+30+31+30+b;                      break;
    case 7: m=31+28+31+30+31+30+31+b;                   break;
    case 8: m=31+28+31+30+31+30+31+30+b;                break;
    case 9: m=31+28+31+30+31+30+31+30+31+b;             break;
    case 10: m=31+28+31+30+31+30+31+30+31+30+b;         break;
    case 11: m=31+28+31+30+31+30+31+30+31+30+31+b;      break;
    case 12: m=31+28+31+30+31+30+31+30+31+30+31+30+b;   break;
    }
    }
    printf("%d", m);
}
