/**
译密码！为使电文保密，往往按一定规律转换成密码，收报人再按一定规律译文回去。
例如：A变E,a变e，即变成其后第四个字母.W变A,X变B,Y变C,Z变D.
本质是asc码的转换，asc码+4。wxyz做另外改变
应该有功能：译文变密码

用循环不断译码
把getchar() scanf()写在一个死循环里，就可以无限输入字符!!!!!
***/
#include<stdio.h>
void main()
{
    char c;
    while(1)
    {
        scanf("%c", &c);     //把输入写到无限循环里就可以无限输入
        if(('E'<=c&&c<='Z')||('e'<=c&&c<='z'))
        {
            printf("%c", c-4);
        }
        else if(('A'<=c&&c<='D'||'a'<=c&&c<='d'))
        {
            printf("%c", c+22);
        }
        else
        {
            printf("%c", c);
        }
    }
}
