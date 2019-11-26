/**
main()括号里的形参，是命令一起给出的。即在一个命令行中包括命令名和需要传给main函数的形参
命令行的一般形式为:
                  命令名 参数1 参数2.....参数n
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
