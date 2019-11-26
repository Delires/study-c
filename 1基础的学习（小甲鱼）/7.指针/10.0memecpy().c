/***hmemcpy()  //万能断点，在win9x的时代可以用来拷贝任何数据

memcpy     //万能断点


函数名: memcpy
功  能: 从源source中拷贝n个字节到目标destin中
用  法: void *memcpy(void *destin, void *source, unsigned n);
程序例:
**/
#include <stdio.h>
#include <string.h>
int main(void)
{
   char src[] = "******************************";
   char dest[] = "abcdefghijlkmnopqrstuvwxyz0123456709";
   char *ptr;
   printf("destination before memcpy: %s\n", dest);
   ptr = memcpy(dest, src, strlen(src));
   if (ptr)
      printf("destination after memcpy:  %s\n", dest);
   else
      printf("memcpy failed\n");
   return 0;
}

