#include <stdio.h>
void main()
{
    printf("%d\n", sizeof(long double ) ); /*%d����%f������������������ģ�������*/
}
                                    /*1byte=8bit  1�ֽ�=8λ*/
                                    /*������float          4byte=4*8=32bit   2^32  */
                                    /*˫����double         8byte=8*8=64bit   2^64  */
                                    /*��˫������double     12byte=8*12=96bit 2^96  */
