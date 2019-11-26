#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0;
    char c;  //注意有字符变量 空格也是asc码
    while(1) //whil循环语句，括号里是判断语句,非0执行括号语句，0直接跳过语句
    {        //语句永远为真
      c='\0'; // 给c赋初值
      while(c!=13&&c!=27)
      {
          c=getch();//　函数用途：从控制台读取一个字符，但不显示在屏幕上
          printf("%c\n", c);
      }
      if(c==27)
        break;    //如果c等于27，直接跳出外层循环while(1)跳出
      i++;
      printf("The No. is %d", i);
    }
    printf("The end");

}
