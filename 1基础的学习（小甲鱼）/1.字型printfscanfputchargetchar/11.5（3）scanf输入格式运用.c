#include <stdio.h>
void main()
{
   int a, b;
   scanf("%3d%*d%5d", &a, &b);    /* %*d赋值时自动空过 %3d%5d限制输入3个字符5个字符*/
   printf("%d\n%d\n", a, b);
}


