#include <stdio.h>
struct student
{
    int num;
    float score;
    struct student *next; //��Žṹ��ָ��
};

int main(void)
{
    struct student jgt, *p1;
    int n;
    p1 = &jgt;

    scanf("%d", &jgt.num);

    printf("%d", p1->num);
}
