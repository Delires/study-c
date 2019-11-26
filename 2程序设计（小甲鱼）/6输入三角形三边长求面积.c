 /* 已知三角形三边长为a，b，c */
/* 面积计算公式为 area=√s(s-a)(s-b)(s-c) */
/*                 其中s=(a+b+c)/2       */

 #include <math.h>   /* 要用到数学的函数库 */
 #include <stdio.h>  /* printf scanf的函数库 也可以不写 */
 void main()         /* 空白主函数 结尾不需要return0    */
 {
     float a, b, c, s,  area;         /* 定义a,d,c,area都为浮点型数据  不定义不能用*/
     scanf("%f%f%f", &a, &b, &c); /* 输入三个浮点数%f，储存在abc处 */
     s = 1.0/2.0*(a+b+c);        /* ①因为是浮点型数据必须加.0 ②浮点型不存在乘除前后的问题 */
     area = sqrt(s*(s-a)*(s-b)*(s-c)); /* 计算面积公式 sqrt是根号的意思 */
     printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f\n", a, b, c, s); /*打印出abcs都为浮点型*/
            /* %7.2f数字就是m 整数占7位，小数占2位*/
     printf("area=%7.2f", area);  /* 打印出面积area，定义area为浮点型 */

 }

 /* 以后想声明float型，直接声明double型即可。double精度大，能自动转化float */
 /* <math.h>函数库里并不包含所有数学公式 */
