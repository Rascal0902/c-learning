#include<stdio.h>
int sw(int a,int b)
{
    int temp;
    temp=a; a=b; b=temp;

}
int main()
{
    int a=10,b=20;
    printf("ȣ����: a=%d",a);
    sw(a,b);
    printf("ȣ���: a=%d",a);
}
