#include<stdio.h>
int main()
{
    int a,b,*pa;
    a=2;
    b=5;
    pa=&a;
    printf("p�� ����Ű�� ���� %d�Դϴ�.",*pa);
    *pa=b;
    printf("p�� ����Ű�� ���� %d�Դϴ�.",*pa);
}
