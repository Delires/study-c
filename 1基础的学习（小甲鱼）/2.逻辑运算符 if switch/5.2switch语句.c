 /*
 switch���ط�֧���Ľṹ
     switch(���ʽ)
    {
    case�������ʽ1:���1;
    case�������ʽ2:���2;
    case�������ʽn:���n;
    default        :���n+1;
    }

����break��䣬������
 */
 #include <stdio.h>
 void main()
 {
     int a;
     printf("input integer number:");
     scanf("%d", &a); //&a �ŵ�a��ַ
     switch(a)  //switch��䣨a���Ǳ��ʽֵ
                //switch���ʽ����дһ����ĸ������д�����ʽ(���ǱȽ���Ŀ�������)
     {
         case 1:printf("Monday\n");break;   //1 �ǳ������ʽ
         case 2:printf("Tuesday\n");break;  //2�ǳ������ʽ
         case 3:printf("Wednesday\n");break;//3�ǳ������ʽ������һ����
         case 4:printf("Thursday\n");break;
         case 5:printf("Friday\n");break;
         case 6:printf("Saturday\n");break;
         case 7:printf("Sunday\n");break;
         default:printf("error\n");//default���������ʽֵ����ͬ��Ĭ��������
                                   //default��break�ɼӿɲ���
     }
 }
