/*
路程（s）越远费用越低
    s<250km   无折扣
250<=s<500km   2%折扣
500<=s<1000km  5%折扣
1000<=s<2000km 8%折扣
2000<=s<3000km 10%折扣
3000<=s        15%折扣
设每公里每吨费用为p，货物重w，距离为s，折扣为d
总运费为 f=p*w*s*(1-d)

switch语句不行！！！case(常量表达式)，即括号里只能是不会变的量，范围不行
用if—else if语句 d多重分支
*/
#include <stdio.h>
#include <math.h>
void main()
{
    int s;
    float f, p, w; //不定义折扣率，把折扣当常值给出来
    printf("please intput 每吨费用p 重量w 距离s \n");
    scanf("%f%f%d", &p, &w, &s); //定义什么数就&什么数 如定义float z   就&z
    if(s<250)
        {f=p*w*s*(1.0);}
    else if(250<=s<500)
        {f=p*w*s*(1.0-0.02);}
    else if(500<=s<1000)
        {f=p*w*s*(1.0-0.05);}
    else if(1000<=s<2000)
        {f=p*w*s*(1.0-0.08);}
    else if
        (2000<=s<3000){f=p*w*s*(1.0-0.1);}
    else if
        (3000<=s){f=p*w*s*(1.0-0.15);}
    else{printf("error error error");}
    printf("价格f=%f", f);
}

/*
过程有问题   比如800，他就会把800分为两部分小于250的部分按照不打折算，大于250的部分才按照0.98折算
*/
