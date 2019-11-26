/**
要用到读文件和写文件操作
    读文件函数:fgetc(ph) //将文件读出
    写文件函数:fputc(ch, fp)//将文件ch写入文件
    读文件结束 feof(fp),文件结束返回1

打开关闭文件函数文件打开 fopen函数
                          FILE *fp;
                          fp = fopen(文件名， "使用方式"); //打开fp指针指向的文件
                                                             //使用方式有具体的字符对应
关闭文件函数  fclose(fp)
**/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2, *fp3; //定义指向文件指针
    char ch1, filename1[20];
    char ch2, filename2[20];
    char ch3, filename3[20];

    printf("如果合成的文件和本程序在一个文件夹里，直接输入文件名＋后缀\n");
    printf("如果合成文件和文件夹不再一个程序里，请输入路径＋文件名＋后缀。如E:\\\\xxx\\\\xx\n\n\n");

//打开文件1
    printf("请输入第一个图片文件加后缀:");
    scanf("%s", &filename1);

    if( !( fp1 = fopen(filename1, "rb")) ) //打开失败返回NULL
    {
        printf("\n没有这个图片文件%s，请检查是否输入正确",filename1);
        exit(0);//结束程序
    }


//打开文件2
    printf("\n请输入第二个压缩文件加后缀:");
    scanf("%s", &filename2);
    if( !( fp2 = fopen(filename2, "rb")) ) //打开文件函数打开失败返回NULL
    {
        printf("没有这个压缩文件%s，请检查是否输入正确", filename2);
        exit(0);//结束程序
    }


//生成文件3
    printf("\n请输入生成的第三个文件名+后缀：");
    scanf("%s", &filename3);
    if( !( fp3 = fopen(filename3, "wb") ) )//打开文件，没打开就生成。失败返回0
    {
        printf("\n Not creat failu, palease check you filename");
        exit(0);
    }



//文件1写入文件3
    while( !feof(fp1) )//读取完返回1,取非不执行
    {
        ch1 = fgetc(fp1);
        fputc(ch1, fp3);
    }
    fclose(fp1);


//文件2写入文件3
    while( !feof(fp2) )
    {
        ch2 = fgetc(fp2);
        fputc(ch2, fp3);
    }
    fclose(fp2);


//写入并生成文件3


     //  ch3 = ch1+ch2;这样是错误，因为提取出来是再加就不是二进制了
     // 直接提取出来，立马写入文件3就行

    printf("\ncreat successfil！");


}
