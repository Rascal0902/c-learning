#include<stdio.h>
int main()
{
    int n,k;
    char a[100]={0,},b[100];
    while(1)
    {
        printf("���� ���ڿ�:%s \n 1.���� 2.�κк��� 3.�߰� 4.�κ��߰� 5.���� \n\n ��ȣ�� �Է��Ͻÿ�?",a);
        scanf("%d",&n);
        if(n==1)
        {printf("\n���ڿ� ?");
        scanf("%s",&b);
        strcpy(a,b);
        }
        if(n==2)
        {
          printf("\n���ڿ� ?");
          scanf("%s",&b);
          printf("��?");
          scanf("%d",&k);
          strncpy(a,b,k);
          }
        if(n==3)
        {printf("\n���ڿ� ?");
         scanf("%s",&b);
         strcat(a,b);
         }
        if(n==4)
        {printf("\n���ڿ� ?");
        scanf("%s",b);
        printf("��?");
        scanf("%d",k);
        strncat(a,b,k);
        }
        if(n==5)
            break;
    }
    printf("%s",a);
}
