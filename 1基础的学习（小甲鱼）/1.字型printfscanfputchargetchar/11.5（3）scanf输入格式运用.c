#include <stdio.h>
void main()
{
   int a, b;
   scanf("%3d%*d%5d", &a, &b);    /* %*d��ֵʱ�Զ��չ� %3d%5d��������3���ַ�5���ַ�*/
   printf("%d\n%d\n", a, b);
}


