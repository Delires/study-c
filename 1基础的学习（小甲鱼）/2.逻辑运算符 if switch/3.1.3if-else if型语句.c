 /*
if��乹�ɷ�֧�ṹ ���������жϿ�
if�������� if-else if��
   ���ʽΪ��if�����ʽ1��
             {���1}
             else if�����ʽ2��     Ҫע�� ���ʽ1�����ִ�����1 ���ʽ2�����ִ�����2
             {���2}
             else if�����ʽ3��
             {���3}
���֦�ṹ�����ִ�����1���ٵļ������жϱ��ʽ2���Դ�����
*/
#include <stdio.h>
void main()
{
    char c; //�����ַ������ˣ���Ӧһ��asc�룬ע�����벻������ո񣬳���%d֮��Ҳ�пո�
    printf("input a character�� ");//������
    c = getchar(); //getchar��sacnfһ���ģ����뺯��
                   //���ʽΪ��char c��
                   //          c = getchar()�� ֻ������һ���ַ�
    if(c<32)                                     //if-else if���
    {                                            //if(���ʽ1)
        printf("This is a control character\n"); //{���1}
    }                                            //else if(���ʽ2)
    else if (c>='0'&&c<='9')                     //{���2}
    {
        printf("This is a digital\n");//��&&��ͬʱ�������˼
    }
    else if (c>='A'&&c<='Z')
    {                                            //�������ȼ���!��--���������--�Ƚ������--��&&��||-��ֵԤ��=
        printf("This is a capital letter\n");
    }
    else if (c>='a'&&c<='z')               //
    {
        printf("This is a small letter\n");
    }
    else
    {
        printf("This is other charcater\n");
    }
}
/*ASC��<32�� control charcater�����ַ� */
/*ASC��>0�ַ�<9���ַ� ��digital����       ��0����48 ��9����57   */
/*ASC��>A�ַ�<Z�ַ�   ��capital letter ��д��ĸ  ��A����65  'Z'��106 */
/*ASC��>a�ַ�<z�ַ�   ��small letter   Сд��ĸ  ��a����97  ��z����122 */
/*�������� �������ַ�                          */
