/* 使用printf可能会因为输出求职顺序不同结果不同 */
/* 如下i++分开写和在一起写是不同的 */
/* 一起写 */
#include <stdio.h>
void main()
{
    int i = 8;
    printf("%d\n", ++i);
    printf("%d\n", --i);
    printf("%d\n", i++);
    printf("%d\n", i--);
    printf("%d\n", -i++);
    printf("%d\n", -i--);
    /* ++i9 --i8 i++8 i--9 -i-- -8   -i++ 9*/
}

/* i++ ++i 先加1在参与运算，先运算在加1 */
/* i是变量 每一次加减都会变化 */

/* -i++ -i-- 都是负的不存在负负得正这一说 */
