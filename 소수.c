#include<stdio.h>
int main()
{
    int a,i,j,k,cnt1=0;
    printf("���� �ϳ��� �Է��Ͻÿ�");
    scanf("%d", &a);
    j=a,k=a+1;
    printf("\n\n ���");
    printf("\n%3d\n",1);
     for(i=2;i<a;i++)
    {
        if(a%i==0)
        {printf("%3d\n",i);
        cnt1++;
        j*=i;
        k+=i;
        }
    }
    printf("%3d \n",a);
    if(cnt1!=0)
    {
       printf("\n ����� ����=%d",cnt1+2);
       printf("\n\n ����� ��=%d",k);
       printf("\n\n ����� ��=%d",j);
       printf("\n\n �Ҽ��� �ƴմϴ�.");
    }
    if(cnt1==0)
    {
       printf("\n ����� ����=%d",2);
       printf("\n ����� ��=%d",k);
       printf("\n ����� ��=%d",j);
       printf("\n it's prime number.");
    }
    printf("\n\n\n\n ����� ������ �迭");
    int y,cnt2=0;
    char x=' ';
    printf("\n");
    for(y=1;y<=a;y++)
    {
        if(a%y==0)
        {
          printf("%10d",y);
          cnt2+=10;
        }
        if(a%y!=0)
        {
          printf("%10c",x);
          cnt2+=10;
        }
        if(cnt2%100==0)
        {
            printf("\n");
        }
    }
   printf("\n\n\n\n ���μ��� ������ �迭 ");
    int z,cnt3=0;
    char w=' ';
    printf("\n");
    for(z=1;z<=a;z++)
    {
        if(a%z==0)
        {
          printf("%10c",w);
          cnt3+=10;
        }
        if(a%z!=0)
        {
          printf("%10d",z);
          cnt3+=10;
        }
        if(cnt3%100==0)
        {
            printf("\n");
        }
    }
    printf("\n\n\n");

}
