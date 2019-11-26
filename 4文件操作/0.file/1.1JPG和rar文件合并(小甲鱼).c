#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *f_pic, *f_file, *f_finish;
    char pic_name[20], file_name[20], finish_name[20];
    char ch;

    printf("请输入需要合成的图片文件和名称：\n");
    printf("图片：");
    scanf("%s", &pic_name);
    printf("\n文件名：");
    scanf("%s", &file_name);
    printf("\n生成为:");
    scanf("%s", &finish_name);

//打开文件1
    if( !(f_pic = fopen(pic_name, "rb") ) )//二进制读取形式rb
    {
        printf("\n打开%s文件失败", pic_name);
        return;//exit(0)
    }

//打开文件2
    if( !(f_file = fopen(file_name, "rb") ) )//二进制读取形式rb
    {
        printf("\n打开%s文件失败", file_name);
        return;//exit(0)
    }

//生成文件3
    if( !(f_finish = fopen(finish_name, "wb") ) )//二进制形式写入wb，没有就生成
    {
        printf("\n打开%s文件失败", finish_name);
        return;//exit(0)
    }

    while( !(feof(f_pic)) )
    {
        ch = fgetc(f_pic);
        fputc (ch, f_finish);
    }
    fclose(f_pic);

    while( !(feof(f_file)) )
    {
        ch = fgetc(f_file);
        fputc (ch, f_finish);
    }
    fclose(f_file);

    printf("\n生成成功！")

    system("pause");


}
