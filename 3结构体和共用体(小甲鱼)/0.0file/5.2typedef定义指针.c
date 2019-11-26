/**
用typedef 给指针起别名
**/
#include <stdio.h>

typedef char* p; //给字符型指针起别名为P

int main(void)
{
    p p1;
    p1 = "I LOVE 何梦迪" ;//指针可间接赋值

    printf("%s\n", p1);

    return 0;
}
