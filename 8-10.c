#include <stdio.h>
#include<string.h>
int main()
{
    char str[16],str2[16];
    printf("��ȣ�� �Է��Ͻÿ�.");
    scanf("%s", str);
    printf("�ٽ� �Է��Ͻÿ�");
    scanf("%s", str2);
    if(strcmp(str,str2)==0)
    {
        if(strcmp(str,"abcd")==0)
            printf("ȯ���մϴ�\n");
        else
            printf("��ȣ�� �߸��Ǿ����ϴ�\n");

    }
    else
        printf("�ξ�ȣ�� �ٸ��ϴ�.");


}
