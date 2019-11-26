/*看整型变量 int基本型/short短整型/long长整型/unsigned无符号型 各占几个字节*/
#include <stdio.h>  /*#啥噗 调用stdio函数   用printf scanf输出输入用stdio.h函数库*/

void main()      /*void空白 函数无返回值 即最后不用写 return0*/
{
   printf("%d\n", sizeof(float  ) ); /*%d整数值 \n换行符，有这个编译出来会空一行 */
                                 /*sizeof就是尺寸的意思  int基本型，可以更改成short/long/unsigned*/
}
