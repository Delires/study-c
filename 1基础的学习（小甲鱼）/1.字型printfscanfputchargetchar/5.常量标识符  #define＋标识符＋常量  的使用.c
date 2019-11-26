#include <stdio.h> /*用stdio.h 这个函数*/
#define FUCK 278.566 /*#define＋标识符＋常量①#念sharp ②定义常量标识符必须大写（变量标识符小写）③定义PRICE为30*/

void main()             /*void main()表示函数无返回值，就是说在程序的结尾处不需要加上return 0*/
{                       /*main主函数里 每句话结束必须要有;*/
    int sum, total;     /*int定义整数型 float浮点型①定义sum和total都是整数②符号后要空格*/
    sum = 10;           /*定义num为10*/
    total = sum*FUCK ;  /*total整体 sum总和  定义数字必须用sum*/
    printf("total = %d", total);/*print打印出 total total定义%d整数字符 浮点数是%f   “xxx”， */
}                               /*主函数是void main() 所以结尾不要 return0 */

/*含义清楚，一改全改  从#define可以直接改变赋值*/
/*int是整数型，小数点后自己会被省略*/
/*常量字母大写   变量字母小写*/
