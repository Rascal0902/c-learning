#include<stdio.h>
int main()
{
    char k=' ';
    int a,b,i,j,cnt=0;
    printf("1���� ���� ���� �Դϱ�?(0~6)");
    scanf("%d",&a);
    printf("�� �����Դϱ�?");
    scanf("%d",&b);
    printf("\n\n");
    printf(" �� �� ȭ �� �� �� ��\n");
    for(i=1;i<=a;i++)
    {
        printf("%3c",k);
        cnt++;
    }

    for(j=1;j<=b;j++)
    {
         printf("%3d",j);
         cnt++;

    if(cnt%7==0)
    {
        printf("\n");
    }
    }
}
