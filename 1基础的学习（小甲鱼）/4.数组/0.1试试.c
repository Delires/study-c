/**
二分法在一个有序数组寻找数a
low mid high 把数组分为三部分，mid>a在下半部分找 mid就变high low继续是low mid变为下半部分中间数
                                mid<a在上半部分找 mid就变low  high继续是high mid变为上半部分中间数
                                这个数肯定在mid找见
**/
#include <stdio.h>
void main()
{
    static int a[10]={-12,0,6,16,23,56,80,100,110,115};//static定义的数是不变的，存在data区
    int low, mid, high ,found, n; //found代表找到与否,n是输入的数
    low=0;
    high=9; //low,mid,high代表的是序列
    printf("intput number:\n");
    scanf("%d", &n);

    while(low <= high) //只要low<high就证明数组是有序的，还有意义
    {
        mid = (low+high)/2;//范围不一样，mid就得变
        if(n == a[mid])//必须是a[mid]这样mid序列
        {
            found=1;
            break;    //break只在循环和switch有用，直接跳出
        }
        else if(n <= a[mid])//取前一半
        {                   ////必须是a[mid]这样mid序列
            high = mid;
            low = low;
        }
        else  //取前一半,else没有判断
        {
            low = mid;
            high = high;
        }

    }

    if(found == 1)
    {
        printf("the number is %d in order of %d\n", n, mid );
    }
    else
    {
        printf(" no no no\n");
    }
}
