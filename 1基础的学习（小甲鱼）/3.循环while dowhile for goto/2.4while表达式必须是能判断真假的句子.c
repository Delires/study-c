/***********
while语句中的表达式一般是“关系表达式或逻辑表达式”，只要表达式为真就可以续运行
                    比如：while(10<a<=100) 错的 因为值永远为1 没有逻辑表达式
                          while(10<a&&a<=) 对的 因为值可1可0   有逻辑表达式
while() 括号里只要是能判断真假的语句就行
************/
#include <stdio.h>
void main()
{
    int a=0, n;  //初始值要定义为0，自增的数不用
    printf("\n input n: ");
    scanf("%d", &n);
    while(n--)          //只要n--就循环，n--先运算n在递减1
    {
        printf("%d", a++*2);//a++*2相当于a*2;a++
    }                      //即 i++ i参与运算后，i值再加12.
}                          //输出的是每次循环的结果，1次输出1个数，2次输出2个数，3次输出3个数
/*
while(n--)决定循环次数
n=0 不循环
n=1 循环1次   值为0   a=1  输出0
n=2 循环2次   值为2   a=2  输出02
n=3 循环3次   值为4   a=3  输出024
n=4 循环4次   值为6   a=4  输出0246
n=5 循环5次   值为8   a=5  输出02468
*/
/*
while() 括号里只要是能判断真假的语句就行，如上题的n--
*/
