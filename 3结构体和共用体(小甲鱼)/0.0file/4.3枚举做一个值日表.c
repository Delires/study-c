/**
ö����һ��ֵ�ձ�ö�ټ�ȡֵֻ����ö�ٷ�Χ��ȡֵ
**/
#if(1)
#include <stdio.h>

int main(void)
{
    enum boy{Tom, Danny, Gan, Lilei}month[31], j;
                                 //����month[31] jΪö�ٱ���������ͱ�����ֻ������4������ȡֵ
    int i;

    j = Tom; //ö�ٱ�����ֵ����ʵ��ֵ�����0

    for(i=1; i<=30; i++)
    {
        month[i] = j; //month���鸳ֵö����ĸ�������
        j++;//�˴����ö����ʵ����ţ����м��������ö�ټ�Ӹ�ֵ

      if( j > Lilei)
      {
        j = Tom;  //j�Լӵ���������Ǹ������´�0��ʼ
      }
    }


    for(i=1; i<=30; i++) //��ӡ����
    {
       switch( month[i] )
       {
        case Tom:printf("%4d %s\t", i, "Tom"); //ö�����ݴ�ӡҪд����ӡ��ֵ
                 break;
        case Danny:printf("%4d %s\t", i, "Danny"); //ö�ٴ�ӡ Ҫ��ֵ"Danny"
                 break;
        case Gan:printf("%4d %s\t", i, "Gan"); //ö�ٴ�ӡ Ҫ��ֵ"Danny"
                 break;
        case Lilei:printf("%4d %s\t", i, "Lilei"); //ö�ٴ�ӡ Ҫ��ֵ"Danny"
                 break;
        default:
                 break;
        }
     }
    printf("\n\n");

    return 0;
}
#endif



#if(0)

#include <stdio.h>
int main(void)
{
    enum{HengMengDi, fanbingbing, TDS, CangJingKong, BDYJY, LY, LYF} xuanxiu[30], j;
                            //���������֣���ʵ���Ƕ������
                            //ö�ٵĶ��������Ӣ��
    int i;//ѭ����ֵ
    j = HengMengDi;

    for(i=0; i<30; i++)
    {
      xuanxiu[i] = j;
      j++;

      if(j>LYF)
      {
          j = HengMengDi; //��ֵ���
      }
    }

    printf("������һ����˯�б�����\n");

    for(i=1; i<30; i++)
    {
        switch(xuanxiu[i])
        {
            case HengMengDi:printf("%4d %s", i, "���ε�");  //��ӡ����ӡ ��ӡɶ�����ԣ�ö�ٵĶ��������Ӣ��
                        break;
            case fanbingbing:printf("%4d %s", i, "������");
                        break;
            case TDS:printf("%4d %s", i, "����ɩ");
                        break;
            case CangJingKong:printf("%4d %s", i, "����Ұ����"); //��ӡ����ӡ ��ӡɶ������,���Ҫ�Ƚ��ַ���������ǰ����
                        break;
            case BDYJY:printf("%4d %s", i, "����");
                        break;
            case LY:printf("%4d %s", i, "�Ծ���");
                        break;
            case LYF:printf("%4d %s\n", i, "�����");
                        break;
        }
    }
    printf("\n\n");
    return 0;
}

#endif




