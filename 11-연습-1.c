#include<stdio.h>
int f(int*a,int n);
int i,*pt;
int main()

{
    int  a[10];

    printf("���� 10���� �Է��ϼ���.");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    f( a, 10);

    return 1;
}
int f(int *a,int n)
{
    pt=a;
   for(i=0;i<10;i++)
    printf("%d", *(pt+i));
}
