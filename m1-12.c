#include<stdio.h>
int main()
{
    int a,n,cnt=0;
    printf("���ϴ� ���� �Է��Ͻÿ�\n");
    scanf("%d\n",&a);
    while(1)
    {
        cnt++;
        scanf("%d",&n);
        if(a==n)
        {
            printf(" h\n");
            break;
        }
        else{
            if(a>n){
                printf(" l\n");
            }
            else{
                printf(" h\n");
            }
        }
    }
    printf("%d������ ���߼̱���.",cnt);
    return 0;
}
