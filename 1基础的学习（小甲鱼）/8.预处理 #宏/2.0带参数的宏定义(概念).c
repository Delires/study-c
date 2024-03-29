/**
带参数的宏定义,即宏名处带形参,相应的字符串就成了表达式

定义形式为:
    #define 宏名(形参表) 字符串
调用形式为:
     宏名(实参表)                  //实参表就相当于对形参的赋值
如:
  #define M(y) y*y+3*y
  k = M(5)    //k=5*5+3*5

注意:
   1.带参宏定义中,宏名和形参表之间不能有空格 即#define 宏名(实参表)
   2.带参宏定义，形参不分配单元,不需要定义类型
         调用时，实参有具体值,所以需要定义类型
   3.带参宏定义中 形参是标识符
       而宏调用中 实参可以是表达式
   4.字符串内的‘形参’通常要括起来 如(y)*(y)
   5.带参宏 和 带参函数 虽然用法很相像,但处理统一表达式可能会截然不同
   6.宏定义可以定义多个语句,在宏调用时,把这些程序又换到源程序内

**/
