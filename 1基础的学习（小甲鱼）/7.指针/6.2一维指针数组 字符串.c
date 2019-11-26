/**
将下边字符串按字母顺序(由小到大)输出
用到指针数组来指向 和 字符串   排序用strcmp()函数来解决  各个函数抽象成文件

一维指针数组定义: 类型符 *数组名 [数组长度]
字符串定义:char a[]=""
           char *a = ""     char *a;
                            a = " ";
函数名: strcmp
功  能: 串比较
用  法: int strcmp(char *str1, char *str2);
引用头文件:#include <string.h>

**/
#include <stdio.h>
#include <string.h>

void main()
{
    void sort(char *name[], int n);
    void print(char *name, int n);

    char *name[] = {"Fish.com", "www.fish.com", "home.fishi.com","thank you"};
                   //指针数组*name每一个数组元素 指向 字符串的首地址
                   //char *name 第1个指针元素指向"Fish.com"的首地址,第2个指针元素指向"www.fish.com"的首地址，依次类推
                   //字符串通常不写长度，即char *name[] 写成char *name[4]也行
    int n =4;

    sort(name ,n);
    print(name, n);
}

void sort(char *name[], int n)
{
    char *temp;
    int i, j, k;

    for(i=0; i<n-1; i++)
    {
        k = i;
        for(j=i+1; j<n; j++)
        {
            if( strcmp(name[k], name[j])> 0)//即name[k] > name[j]
            {
                k = j;
            }
            if(k != i )
                {
                    temp = name[i];
                    name[i]=name[k];
                    name[k]=temp;
                }
        }
    }

}

void print(char *name, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s\n", name[i]);
    }
}


