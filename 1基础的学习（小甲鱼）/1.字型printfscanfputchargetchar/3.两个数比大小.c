/* getchar scanf 这种函数要在编译器里再输入数据 */
int max(int a,int b);
main()
{
    int x,y,z;
    int max(int a,int b);
    printf("input two numbers:\n");/*有输入输出函数 用stdio.h 函数库*/
    scanf("%d%d",&x,&y);           /*scanf输入语句 printf输出语句*/
    z=max(x,y);
    printf("maxmun=%d",z);

}

int max(int a,int b)
{
    if(a>b)return a;
    else  return b;
}


