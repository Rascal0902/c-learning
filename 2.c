#include<stdio.h>
int main()
{
   int a,b;
   char k;
   printf("���� �� ���� �Է��Ͻÿ�");
   scanf("%d %c %d", &a, &k, &b);
   switch(k)
   {
      case '+' : printf("��=%d",a+b); break;
      case '-': printf("��=%d",a-b); break;
      case '/' : printf("��=%d",a/b); break;
      case '*' : printf("��=%d",a*b); break;
      default: printf("��Ģ �����ڰ� �ƴϱ���.");

    }
}

