#include <stdio.h>
float max=0, min=0; //ȫ�ֱ���,max,min���÷���

void main()
{
    float average(float array[], int n);
    float ave;
    float score[10]={15.6, 77.3, 45.6, 63.5, 55.2, 23.1, 25.1, 98.2, 14.6, 78.6};

    ave = average(score, 10);//�˴��ǹؼ���Ҫ������Ŀ��
    printf("%f, %f, %f", max, min, ave);

}

float average(float array[10], int n)
{
    int i;
    float aver, sum=array[0];
    max = min = array[0];

    for(i=1; i<n; i++)
    {
      if(array[i] > max)
            max = array[i];
      else if (array[i] < min)
            min = array[i];
     sum= sum+array[i];
    }
    aver = sum/n;
    return aver;
}







