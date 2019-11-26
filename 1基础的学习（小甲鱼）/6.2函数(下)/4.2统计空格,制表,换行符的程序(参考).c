/**
统计空格,制表,换行符的程序,单引号本质是asc码
用于参考搞4.1那道题
**/
#include <stdio.h>
void main()
{
    int c, nb, nt, nl;
    c = nb = nt = nl = 0;
    while(c = getchar() != EOF)//getchar()用循环不断输入字符
    {                        //按EOF编译退出 F6或 crtl+z
        if(c == '6')
        {
             ++nb; //nb=+1
        }
        if(c == '\t')
        {
            ++nt; //nt=+1
        }
        if(c == '\n')
        {
            ++nl;//nl=+1
        }
    }
 printf("%d %d %d\n", nb, nt, nl);
}
