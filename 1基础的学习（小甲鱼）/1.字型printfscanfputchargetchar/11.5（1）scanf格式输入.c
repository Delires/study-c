/* 格式为 scanf("格式控制字符串", 地址列表)  如scanf("%d%d%d", &a, &b, &c)*/
/* 格式控制字符串 就是 %d %c %u 这些规定输入的格式 */
/* 地址列表 就是  &a &b &c 你输入的数据必须在电脑中储存，&c就是你储存的地址*/

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("input a,b,c\n");  /* 没定义数的类型%d%f之类的，所以是简单的把冒号里的东西输出 */
    scanf("%d%d%d", &a, &b, &c); /* 冒号里是定义输入的类型为整型(冒号里无逗号)，&a是定义输入储存的地址，随着%d的增加&由a到z */
    /* scanf在编译器里每输入一个数据 再点击回车(或空格) 换行(空格)输入下一个数据 */
    printf("a=%d, b=%d, c=%d", a, b, c);/* 打印出 a=数 b=数 c=数    这个数字是你输入的 */
   /* printf冒号里出了%d之外全部打印出来，%d是你冒号外赋的值 */
}

/* 依次输入数据，要用空格或者回车隔开 */
/* 尝试&a，少打一个&，编译没问题但是运行window系统会自动保护 因为错了 访问了window不允许的范围 */
