/*****
break语句形式为    break;
break语句只能跳出一次循环(只能跳出一次for)，全部跳出用 goto a   把a放在循环外面
break语句只在循环中用，对if语句不起作用
*****/
#include <stdio.h>
void main()
{   int r;
    float pi = 3.1415926, area;
    for( r=1; r<=10; r++)
    {
        area=pi*r*r;//圆面积公式
        if(area>100)
        {
            break;  //break对if不起作用，不是跳出if，是跳出for语句
        }
        printf("r=%d, area=%f\n",r ,area);
    }

}
  /*
    圆的半径从1到10，如果圆的面积大于100就跳出循环，不打印
    所以只输出小于100时 圆的半径和面积
    因为小于100才不会跳出for语句，才会有打印输出

    */
