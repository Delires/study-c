/**
用指针和*&代替变量
*取变量值
&取变量地址
定义指针变量必须前头有*
输入ab两个数，按ab大小输出
**/
#include <stdio.h>
void main()
{
    int a, b;
    int *pointer_1, *pointer_2; //定义指针变量前必须加*

    pointer_1 = &a;
    pointer_2 = &b;//把ab地址赋过去，pointer代表地址

    scanf("%d %d", &*pointer_1, &*pointer_2);
           //*pointer == a  &*pointer == &a

    if(*pointer_1 > *pointer_2)
    {
        printf("%d %d", *pointer_1, *pointer_2);
    }
    else
    {
        printf("%d %d", *pointer_2, *pointer_1);
    }
}
