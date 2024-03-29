#include <stdio.h>    /*调用stdio.h这个函数*/
main()                /*主函数*/
{
    float fahr, celsius; /*1.主函数里自动空一个字符便于观察  2.加减乘除两边都空一个字符,逗号后面空一格 3.定义摄氏华氏为float浮点型（有小数点）*/
    int lower, upper, step ;  /*从最低到最高，步距 都是int整数型*/

    lower = 0;           /*最低从0开始，加减乘除两端都要空一个字符*/
    upper = 300;         /*最高到300， 加减乘除两端都要空一个字符 逗号后空一格字符*/
    step = 20;           /*步距是20，没变化一次加20*/

    fahr = lower ;       /*华氏从最低开始*/
    while (fahr<=upper){   /*while语句 如果满足（）里的条件 就 执行{}里的程序    不满足直接结束*/
        celsius = (5.0/9.0) * (fahr-32.0);  /*因为定义是float浮点数 可以两个数直接相除不省略小数部分，打程序时加上 .0 表示浮点数*/
        printf("%3.0f %6.1f\n", fahr, celsius);/*%f以浮点数输出，%d以整数输出  %3.0f 占三个字符的浮点数     （因为是浮点数，所以数字后都加.0以表尊重）*/
        fahr = fahr + step;       /* fahr每次增加一个步距20*/
    }


}
