/**
  ①主函数调用其他函数(除主函数外可互相调用)
  ②其他函数互相调用
  ③同一函数可以被一个或多个函数调用多次
有()的是函数
**/

#include <stdio.h>
void main()
{
    void printstar(); //声明printstar
    void print_message();//声明print_message

    printstar(); //调用printstar
    print_message();//调用print_message
    printstar();//调用printstar

}

void printstar() //定义printstar  或用int return 0
{
    printf("****************\n");
}

void print_message()//定义print_message
{
    printf("曹鹏祥努力!\n");
}
/**
从此函数可知
1.一个c程序是由多个模块组成，此题有三个模块 voidmian() voidprintstar() voidprint_message
2.对于一个大程序，一般不希望把所有内容放在一个文件中，而是分别放在若干个源文件中，这样编译编写，分编写，调试。即哪个函数出问题就找哪个函数
3.一个源程序可以被多个c程序调用
4.c程序执行是从main()函数开始i，如果main函数调用其他函数，在调用后就会返回main函数，然后再main函数执行完后结束整个运行
5.main函数最高。其他函数平级，一个并不属于一个。函数可互相调用，但不能调用main函数
6.从用户看函数有两种
    ①标准函数,即库函数.由系统自带,如printf scanf while if
    ②用户自己定义的函数
7.从函数形式看有两种
    ①无参数函数:viod没返回值 ()里没东西 主参数函数在调用被调用函数，不会传递数据
    ②有参数函数:调用函数时，主参数函数在调用被调用函数，会传递数据
**/
