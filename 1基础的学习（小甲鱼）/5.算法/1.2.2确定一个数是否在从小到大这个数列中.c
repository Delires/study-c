/**
假设数组a中的数据是按照从大到小排列:-12,0,6,16,23,56,80,100,110,115
从键盘输入一个数，判定该数是否在数组a中，若在输出所在序号

第一步:设low,mid，hingh三个变量，分别指起始元素，中间元素，最后元素
       数组a low=0 mid=4 high=10 （这个数字是序号）
       判断mid指示的数是否为所求，mid指示的是23不是80，要继续进行查找
       [-12,0,6,16,23,56,80,100,110,115]
第二步:因为80>23,所以查找范围成了23以后的数字
       即原来low=0,现在low=23 mid=100范围后分割一半
       [56,80,100,110,115]
第三步:再用mid=100和80比较，mid>80
       原来low=23，现在low=56  mid=80 分割前一半
       [56,80,100]
第四部:用mid=80和80比较，得出答案

注意:数组必须是按照大小顺序排列
     若在查找中出现low>high的情况，说明序列中无次数，结束查找过程

**/
#define M 10 //宏定义常量，没有;号
            //以后只要出现M就是10
#include <stdio.h>
void main()
{
    static int a[M]={-12,0,6,16,23,56,80,100,110,115};//static静态变量 让数组放在DATA区
    int n, low, mid, high, found, d;
    low = 0;
    high = M-1; //M就是10
    found = 0;//找到是1 没找到是0
    printf("Input a number to be searched:");
    scanf("%d", &n);
    while(low <= high)
    {
        mid = (low + high)/2;
        if(n == a[mid])
        {
            found = 1;
            break;   //break只对switch和循环起作用
        }
        else if (n > a[mid])
        {
            low = mid + 1;//把中间+1赋给low 取上一半
                          //mid+1 high-1 这样最后low>high才会跳出循环
        }
        else
        {
            high = mid-1;//把中间-1赋给low 取下一半
        }
    }


    if(found == 1)
     {
       printf("the idex of %d is %d", n, mid);
     }
     else
     {
         printf("this is not %d", n);
     }


}



















