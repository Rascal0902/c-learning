#include<stdio.h>
int main()
{
    int a,n;
    char k;
    while(1){
    printf("\n�ո��� 1\n�޸��� 2\n�����Ϸ��� d,���Ḧ �ҷ��� f�� �Է��Ͻÿ�.");
    scanf(" %c",&k);
    if(k=='f'){
        break;
    }
       n=rand()%2+1;
        printf("\n\n������ �������ϴ�.�ո�? �޸�?  :");
         scanf("%d",&a);
         printf("\n\n����� :%d  ���� :%d",a,n);
    if(a==n)
    {
        printf("\n���߼̽��ϴ�.");
    }
    else{
        printf("\n�� �ƴϾ� ��");
    }
    printf("\n");
    }
    return 0;
}
