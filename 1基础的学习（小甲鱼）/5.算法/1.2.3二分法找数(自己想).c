/**
���ַ���һ����������Ѱ����a
low mid high �������Ϊ�����֣�mid>a���°벿���� mid�ͱ�high low������low mid��Ϊ�°벿���м���
                                mid<a���ϰ벿���� mid�ͱ�low  high������high mid��Ϊ�ϰ벿���м���
                                ������϶���mid�Ҽ�
**/
#include <stdio.h>
void main()
{
    static int a[10]={-12,0,6,16,23,56,80,100,110,115};//static��������ǲ���ģ�����data��
    int low, mid, high ,found, n; //found�����ҵ����,n���������
    low=0;
    high=9; //low,mid,high�����������
    found=0;
    printf("intput number:\n");

#if(0)
    scanf("%d", &n);
    if(n<a[0]||n>a[9])//���������Χ������
    {
        printf("error");
    }
#endif
    while(scanf("%d", &n) != 1)//scanf����ֵ��1��˵����ֵ�ɹ�
    {
        printf("illegal intput!!!\n please again");
        getchar();//��������������һ��
    }


    while(low <= high) //ֻҪlow<high��֤������������ģ���������
    {
        mid = (low+high)/2;//��Χ��һ����mid�͵ñ�
        if(n == a[mid])//������a[mid]����mid����
        {
            found=1;
            break;    //breakֻ��ѭ����switch���ã�ֱ������
        }
        else if(n < a[mid])//ȡǰһ��
        {                   ////������a[mid]����mid����
            high = mid-1;
        }
        else  //ȡǰһ��,elseû���ж�
        {
            low = mid+1; //mid+1 high-1 �������low>high�Ż�����ѭ��
        }

    }

    if(found == 1)
    {
        printf("the number is %d in order of %d\n", n, mid );
    }
    else
    {
        printf(" not %d", n);
    }
}
