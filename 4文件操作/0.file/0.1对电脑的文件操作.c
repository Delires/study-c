/**
对电脑的文件进行操作
文件打开(fopen函数)
    函数调用形式:
           FILE *fp;
           fp = fopen("文件名", "使用方式")

                   //文件名格式为"E:\\xxx.x"
                   //"使用方式"有专门的表格对应

**/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;//标准马甲

//如果没打开文件就打印Can not
    if( !(fp = fopen("E:\\fish.text", "w" )) ) // 注意用双"\"
    {                   //w方式，若打开的文件不存在，就建立一个文件
        printf("Can not open H:\\fish.text\n");
        system("pause");
    }

//打开文件就打印Success
    else
    {
        printf("Open success!\n");
    }
}
