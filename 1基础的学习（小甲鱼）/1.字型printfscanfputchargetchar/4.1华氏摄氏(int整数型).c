#include <stdio.h>  /* 调用stdio.h这个函数库里的函数，stdio.h函数库是系统自带的。水平高的可自己写库 */
main()              /*main（）代表主函数的意思，每个c语言程序都有且只有一个。后文要用{}去写*/
{
   int fahr,celsius;/*int数据类型 表示后面变量为整数    float数据类型 后面变量为浮点数（可以含有小数）*/
   int lower,upper,step;/*fahr华氏度 celsius摄氏度 lower最低值 upper最高值 step步长（数与数之间的差值）定义了int这些数必须都是整数*/
   lower =0;
   upper =300;
   step  =10;          /*大括号里写完一句话都要有一个;  定义数字fahr华氏度从0到300*/

   fahr = lower;      /*华氏温度从最低lower开始*/
   while (fahr <= upper ){  /*如果while括号里的条件为真执行{}里的程序 如果while（）里的条件为假，循环结束*/
                            /*（）内为 华氏温度fahr小于等于最高温度upper*/
   celsius = 5*(fahr-32)/9;   /*  5/9*(fahr-32)算出来是0因为5/9两个整数除会省略有小数的部分，所以必须是5*(fahr-32)/9 两个整数不能直接除  公式 摄氏温度＝5*华氏温度-32 /9*/
   printf("%3d\t%6d\n",fahr,celsius);/*printf输出函数，%d代表一个整形参数（因为要把fahr，el表示出来）打印出fahr华氏摄氏温度d，d代表一个数字位置 \n表示换行符*/
                                   /* \t表示在摄氏和华氏之间留一个字符空间 %d表示按照整数打印 %f浮点数打印 %3d%6d 华氏占3个字宽，摄氏占6个字宽   这样运行出来的数字是右对齐的*/
   fahr = fahr+step;   /*华氏逐渐加20*/

   }
}
