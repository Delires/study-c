/**
*ȡֵ &ȡַ
ָ�븳ֵ�����ǽṹ�壬���������Ľṹ�����

**/
#include <stdio.h>
struct stu
{
    int num;
    char *name;
    char sex;
    float score;
}boy1={102, "fish", 'M', 78.5};  //��fish�����ַ��� ��ֵ��Ҫ*
                                 //��M�����ַ�  ��ֱ�Ӹ�ֵ

int main(void)
{
    struct stu *pstu; //pstu�Ǹ��ŵ�ַ�ģ�*ȡ��ַ���ֵ�����������ֵ�Ǹ��ṹ��
    pstu = &boy1;  //boy1�ĵ�ַ����pstu����ȥpstu��ֵ

    printf("number=%d\nname=%s\n", boy1.num, boy1.name);
    printf("sex=%c\nscore=%f\n\n", boy1.sex, boy1.score);
                             //���淽��ȡ�ṹ���ֵ
    printf("number=%d\nname=%s\n", (*pstu).num, (*pstu).name);
    printf("sex=%c\nscore=%f\n\n", (*pstu).sex, (*pstu).score);
                             //ָ�뷽��ȡ�ṹ���ֵ
    printf("number=%d\nname=%s\n", pstu->num, pstu->name);
    printf("sex=%c\nscore=%f\n\n", pstu->sex, pstu->score);
                             //λ��������ȡ�ṹ���ֵ


}
