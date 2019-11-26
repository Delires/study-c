#include <stdio.h>
void main()
{
    printf("%d\n", sizeof(long double ) ); /*%d还是%f是由算出来的数决定的！！！！*/
}
                                    /*1byte=8bit  1字节=8位*/
                                    /*单精度float          4byte=4*8=32bit   2^32  */
                                    /*双精度double         8byte=8*8=64bit   2^64  */
                                    /*长双精度龙double     12byte=8*12=96bit 2^96  */
