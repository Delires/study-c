/*
这与3.2.2(1)所表达的相同，但写法不同
此种写法没有嵌套，更高不需要用就近配对原则。直接用if-else if型
*/
#include <stdio.h>
void main()
{
    int a, b;
    printf("please intput A,B:");
    scanf("%d%d", &a, &b);
    if(a==b)
      {printf("A=B\n");}
    else if(a>b)
      {printf("A>B\n");}
    else
      {printf("A<B\n");}

}
