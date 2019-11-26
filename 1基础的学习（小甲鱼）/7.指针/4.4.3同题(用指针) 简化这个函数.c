#include <stdio.h>
void duplicate(char *from, char *to);//声明指针函数

void main()
{
   char *a = "I am a teacher";
   char b[] = "You are my student";//*a = a[]  *a就是地址a的取值为
  //char *b 改成 char b[] 就可以编译成功
  //char b[] 是auto变量可改变
  //char *b  是static变量不可改变


   printf("%s\n", a);
   printf("%s\n", b);
   //此处 a == *a

   duplicate(a, b);

   printf("%s\n", a);
   printf("%s\n", b);
}

void duplicate(char *from, char *to)
{
    while((*to = *from) != '\0')//把赋值写到while()判断里 把自增写在{}里
    {                           //只要不等于结束符'\0' 就一直自增下去
        *to++;
        *from++;
    }
    #if(0)
        while( (*to++ = *from++ ) !='\0' )//*比++运算符优先级高，全写到括号里
        {
             ;
        }
    #endif)

    #if(0)
        while( *to++ = *from++)//省略了结束条件'\0'
        {                      //因为0的ASC码是'\0' 当a赋值完,最后一个字符是\0即0，当while语句为0就自己跳出
            ;
        }
    #endif

}
