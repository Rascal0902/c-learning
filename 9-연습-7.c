#include<stdio.h>

#include<time.h>
int main()
{
    int i,n;
    printf("\n ���� �߻� srand(100) ����� \n");
    srand(1);
    for(i=0;i<=10;i++)
    {
        printf("%7d",rand());
    }
    printf("\n�����߻� srand(time) ����� \n");
    srand((unsigned)time(NULL));
    for(i=0;i<=10;i++)
    {
        printf("%7d",rand());
    }

}
