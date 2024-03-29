/*
逻辑运算就和数电一样 与或非三种
(二者同时满足)与&&   (二者其中一个满足)或||  (取反)非！


 与&& 或||  为双目运算  具有左结合性
 ！非       为单目运算  具有右结合性


 三者优先级:非!---与&&---或||



 与其他的优先级:非!---算术运算(加减乘除取模)---关系运算符(>>=<<===1=)
             ---与&&和非||---赋值运算(=)



ps：任何数取！非都是0，0取！非是1



a>b&&c>d        等价于   (a>b)&&(c>d)
!b==c||d<a      等价于   ((!b)==c)||(d<a)
a+b>c&&x+y<b    等价于   ((a+b)>c)&&((x+y)<b)
*/

/*
逻辑表达式一般形式为：表达式+逻辑运算符+表达式
表达式又可以是逻辑表达式，所以存在嵌套
(a&&b)&&c 因为左连续性等价为 a&&b&&c
逻辑运算的最后值都是 真为1 假为0
*/
