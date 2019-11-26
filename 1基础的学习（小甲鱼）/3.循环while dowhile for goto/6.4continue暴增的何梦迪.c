/***
这是个死循环
continue; 结束此次循环,不执行下面的程序,重新开始下一次循环
****/
#include <stdio.h>
void main()
{
  while(1)
{
    printf("何梦迪");
    if(1)
    {
        continue;
    }
    printf("ssssssssssssssss");//这部分就不执行了
}

}
