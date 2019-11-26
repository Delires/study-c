/*
当了解两种嵌套 if语句嵌套 和 if-else嵌套 后，当嵌套过多时，出现多个if和多个else时，到底哪个if和哪个else配对就存在问题。
所以提出“就近配对原则”
如  if(表达式1)
    if(表达式2)
    {语句1；}
    else
    {语句2；}
那么，else到底和哪个if配对呢？到底是if嵌套if-else的if，还是if-else嵌套if？
因该是 if-else嵌套if即else和上一个if是一对，这就是就近配对原则
就近配对原则就是：else和最近的那个if是一对
*/
#include <stdio.h>
void main()
{
    int a, b;
    printf("please intput A,B:");
    scanf("%d%d", &a, &b);
    if(a!=b)                      //由就近配对原则 if-else嵌套进了 if—else的if中
    if(a>b)                       //那!=是比较符中的 不等于 的意思
        {printf("A>B\n");}        //中间俩if 和 else是一对
    else
        {printf("A<B\n");}
    else
        {printf("A=B\n");}

}
/*程序意思为，如果a不等于b满足，执行语句1，语句1为如果a大于b输出A>B,否则输出A<B。
              如果a不等于b不满足，输出A=B
*/
