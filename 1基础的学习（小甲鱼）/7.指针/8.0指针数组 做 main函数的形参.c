/**
main()��������βΣ�������һ������ġ�����һ���������а�������������Ҫ����main�������β�
�����е�һ����ʽΪ:
                  ������ ����1 ����2.....����n
**/

#include <stdio.h>
void main(int argc, char *argv[])
{
    while(argc > 1)
    {
        ++argv;
        printf("%s\n", argv);
        --argc;
    }
}
