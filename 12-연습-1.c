#include<stdio.h>
struct grade
{

    char name[20];
    int kor;
    int eng;
    int math;
    int tot;
    float avg;
    int num2;

};

int main()
{
   int i,j,k;
   struct grade kk[10];
   struct grade *p;
 for(i=0;i<=9;i++)
   {

  printf("�̸�"); scanf("%s",kk[i].name);
  printf("����"); scanf("%d",&kk[i].kor);
  printf("����"); scanf("%d",&kk[i].eng);
  printf("����"); scanf("%d",&kk[i].math);
  kk[i].num2=i;
  kk[i].tot=kk[i].kor+kk[i].eng+kk[i].math;
  kk[i].avg=kk[i].tot/3.0f;

  for(k=0;k<=i;k++)
 {
     if(kk[i].tot<=kk[k].tot)
  {
      j=kk[i].num2;
      kk[i].num2=i;
      i=j;
  }
 }
   }
   printf("��ȣ  �̸�  ����  ����  ����  ����  ���  ����\n");
  for(i=0;i<=9;i++)
  {
      printf("%d",i) ;
     printf("%s",kk[i].name) ;
     printf("%d",kk[i].kor) ;
     printf("%d",kk[i].eng) ;
     printf("%d",kk[i].math) ;
     printf("%d",kk[i].tot) ;
     printf("%.1f",kk[i].avg) ;
     printf("%d",kk[i].num2) ;
      printf("\n");
  }

}
















