/**
ʲô�ǽṹ��Ƕ�ף�
    ����ĳ�ṹ������ѧ�������ɼ�סַ�������סַ�з�Ϊʡ����,�����ֿ��Գ�һ��Ƕ��

���ʹ�ã�
    �ȶ���һ��С�ṹ�壬�ٶ����ṹ��д��Աʱд struct xxx

ע��:�ڸ��ṹ����Ľṹ�帳ֵʱ��һ��Ҫ��.������ �� ��ṹ.С�ṹ.��Ա

���ַ�����ֵ�����ַ���
   ��ֱ�Ӹ�ֵ char name[10] = "asddasd";  //˫���Ų������ұ���ֱ�Ӹ�ֵ
   �ڼ�Ӹ�ֵ char *name[10];
                   name = "asddasd";  //*ȡֵ������name����һ������ȡ����ֵ
**/
#include <stdio.h>
int main(void)
{
    struct data //����С�ṹ��
    {
        char *province; //province[10];
        char city[10];
        char town[10];   //�ַ�����Ӧ%s
    };

    struct
    {
        int number;
        char *name; //name[20];
        char *sex; //sex[5]
        struct data address; //��ԱΪ�ṹ�壬struct data��С�ṹ address�Ǹ��ٴ�ṹ���С�ṹ����
    } boy1, boy2;
     //����ֱ�����ýṹ���������ƣ������ٺ��������ṹ����

    boy1.number = 1;
    boy1.name = "cao";
    boy1.sex = "men";

    boy1.address.province = "ShannXi"; //��ֵʱһ��Ҫ��.������ �� ��ṹ.С�ṹ.��Ա

    printf("intput city and town of this luck boy");
    scanf("%s", &boy1.address.city);
    scanf("%s", &boy1.address.town);

    printf("number=%d\nname=%s\n\sex=%s\n", boy1.number, boy1.name, boy1.sex);

    printf("province=%s\ncity=%s\ntown=%s\n", boy1.address.province, boy1.address.city, boy1.address.town);
                                      //��ֵ��ӡʱһ��Ҫ��.������ �� ��ṹ.С�ṹ.��Ա
    return 0;
}
