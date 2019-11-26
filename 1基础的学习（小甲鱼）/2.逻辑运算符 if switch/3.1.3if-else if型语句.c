 /*
if语句构成分支结构 存在菱形判断框
if语句第三种 if-else if型
   表达式为：if（表达式1）
             {语句1}
             else if（表达式2）     要注意 表达式1满足就执行语句1 表达式2满足就执行语句2
             {语句2}
             else if（表达式3）
             {语句3}
多分枝结构，真的执行语句1，假的继续在判断表达式2，以此类推
*/
#include <stdio.h>
void main()
{
    char c; //定义字符变量了，对应一个asc码，注意输入不能随便打空格，除非%d之间也有空格
    printf("input a character： ");//无意义
    c = getchar(); //getchar和sacnf一样的，输入函数
                   //表达式为：char c；
                   //          c = getchar()； 只能输入一个字符
    if(c<32)                                     //if-else if语句
    {                                            //if(表达式1)
        printf("This is a control character\n"); //{语句1}
    }                                            //else if(表达式2)
    else if (c>='0'&&c<='9')                     //{语句2}
    {
        printf("This is a digital\n");//与&&是同时满足的意思
    }
    else if (c>='A'&&c<='Z')
    {                                            //运算优先级：!非--算术运算符--比较运算符--与&&或||-赋值预算=
        printf("This is a capital letter\n");
    }
    else if (c>='a'&&c<='z')               //
    {
        printf("This is a small letter\n");
    }
    else
    {
        printf("This is other charcater\n");
    }
}
/*ASC码<32是 control charcater操作字符 */
/*ASC码>0字符<9的字符 是digital数字       ‘0’是48 ‘9’是57   */
/*ASC码>A字符<Z字符   是capital letter 大写字母  ‘A’是65  'Z'是106 */
/*ASC码>a字符<z字符   是small letter   小写字母  ‘a’是97  ‘z’是122 */
/*都不满足 是其他字符                          */
