/*
switch开关分支语句
switch是一种用于多分支选择的语句
表达式为：
    switch(表达式)
    {
    case常量表达式1:语句1;
    case常量表达式2:语句2;
    case常量表达式n:语句n;
    default        :语句n+1;
    }
语意为 表达式的值等于那个常量表达式就执行哪个语句以及后面的语句，如果均不等于执行default(默认)后的表达式


break语句，搭配switch语句，放在每个语句后。这样满足哪个常量表达式执行语句后就会立马跳出，否则会执行此常量后的所有语句。default后可加可不加
即    switch(表达式)
    {
    case常量表达式1:语句1;break;
    case常量表达式2:语句2;break;
    case常量表达式n:语句n;break;
    default        :语句n+1;             default后可加可不加
    }


注意：







*/
