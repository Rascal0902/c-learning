#include<stdio.h>
int main()
{
    int score;
    printf("������ �Է��Ͻÿ�.");
    scanf("%d",&score);

    if(score>90)
      printf("A+");
    else if(score>80)
     printf("B+");
    else if(score>70)
     printf("c+");
    else
        printf("���ݴ� ����ϼ���.");

}
