#include<stdio.h>
int main()
{
    int i,n,a[100],x=0,y=0,z=0,w=0,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("data(%d) =",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        x+=a[i]/1000;
        y+=a[i]/100-a[i]/1000;
        z+=a[i]/10-a[i]/100;
        w+=a[i]/1-a[i]/10;
        j+=a[i];
    }
    printf("1000�ڸ����� �� =%d\n",x);
    printf("100�ڸ����� �� =%d\n",y);
    printf("10�ڸ����� �� =%d\n",z);
    printf("1�ڸ����� �� =%d\n",w);
    printf("�հ� =%d",j);
    return 0;
}
