/**
文件打开 fopen函数
   FILE *fp;
   fp = fopen("文件名"， "使用方式"); //打开fp指针指向的文件
                                   //使用方式有具体的字符对应

fputc()函数调用，读取文件必须是以写或读写的方式打开(因为这样字符才会写入)

fputc()是向文件写入字符
  fputc(ch, fp);   //将字符ch的值写入fp指向的文件

fgetc()文件字符输出函数
  fgetc( fp);   //将fp文件字符读出

EOF
  Ctrl+Z
**/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, filename[20];

    printf("Please input the filename you want to write:");
    scanf("%s", &filename); //写入文件名

    if( !( fp = fopen(filename, "wt+") ) ) //打开失败返回NULL=0
     {      //wt+ 读写打开或着建立一个文本文件；允许读写。
            //fputc函数必须再写或读写的模式下才能使用
         printf("Cannot open the file!\n");
         exit(0); //终止程序
     }

     printf("Please intpit the sentences you want write: ");
     ch = getchar(); //两个getchar()一个输入内容，另一个吸收scanf的缓存
     ch = getchar();

     while( ch != EOF)//如果不是结束符EOF就继续写入
     {
         fputc(ch, fp);//w向文件写入字符
         ch = getchar();
     }

     fclose(fp); //关闭文件，有开有关
}
