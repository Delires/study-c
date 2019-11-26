/**
fgetc()文件字符输出函数

fgetc(fp)函数调用，读取文件必须是以读或读写的方式打开(因为这样字符才会输出)

使用格式
  fputc(ch, fp);   //将ch字符 写入fp文件
**/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, filename[20];

    printf("Please input the filename you want to write:");
    scanf("%s", &filename); //写入文件名

    if( !( fp = fopen(filename, "r") ) ) //打开失败返回NULL=0
     {      //r 打开一个文件；允许读。

         printf("Cannot open the file!\n");
         exit(0);
     }

     while( ch != EOF)//文章末尾结束就自动关掉
     {
         ch = fgetc(fp);//读文件
         putchar(ch);//打印出ch
     }

     fclose(fp); //关闭文件，有开有关
}
