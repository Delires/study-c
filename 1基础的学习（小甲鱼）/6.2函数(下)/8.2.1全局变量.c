/**
全局变量:在函数外定义，从定义位置开始到文件结束所有函数都能用
                        切记:从定义开始 到 函数结束
注意:1.使用全局变量过多会降低程序清晰性
     2.全局变量在整个过程都占内存
     3.使函数通用性和移植性降低

输入长l 宽w 高h 算长方体体积和各面面积
**/
#include <stdio.h>
int s1, s2, s3;//定义全局变量，从定义开始到函数结束都能用

int vs( int l, int w, int h)//在主函数前定义函数，省去声明函数的步骤
{
    int v; //可以定义相同的变量但互不影响
    v  = l*w*h;
    s1 = l*w;
    s2 = l*h;
    s3 = w*h;
return v;
}

void main()
{
    int v, l, w, h;
    printf("please int put long wide and high:\n");
    scanf("%d %d %d", &l, &w, &h);
    v = vs(l, w, h);//可以定义相同的变量但互不影响
    printf("体积=%d 上面积=%d 侧面积=%d 证面积=%d", v, s1, s2, s3); //s1s2s3全局变量早已定义
}
/**
两个程序都有 v,l,w,h 可以定义相同的变量但互不影响
**/
