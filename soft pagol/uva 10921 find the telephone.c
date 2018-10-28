#include<stdio.h>
#include<string.h>
int main()
{
    char phone[50],l;
    int i,j;
    while(scanf("%s",phone)==1)
    {
        for(i=0; phone[i]; i++)
        {
            if((phone[i]=='A')||(phone[i]=='B')||(phone[i]=='C'))
                printf("2");
            else if((phone[i]=='D')||(phone[i]=='E')||(phone[i]=='F'))
                printf("3");
            else if((phone[i]=='G')||(phone[i]=='H')||(phone[i]=='I'))
                printf("4");
            else if((phone[i]=='J')||(phone[i]=='K')||(phone[i]=='L'))
                printf("5");
            else if((phone[i]=='M')||(phone[i]=='N')||(phone[i]=='O'))
                printf("6");
            else if((phone[i]=='P')||(phone[i]=='Q')||(phone[i]=='R')||(phone[i]=='S'))
                printf("7");
            else if((phone[i]=='T')||(phone[i]=='U')||(phone[i]=='V'))
                printf("8");
            else if((phone[i]=='W')||(phone[i]=='X')||(phone[i]=='Y')||(phone[i]=='Z'))
                printf("9");
            else
                printf("%c",phone[i]);
        }
        printf("\n");
    }

    return 0;
}
