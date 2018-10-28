#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch,store;
    int i,j,k,l;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        {
            printf("%c",ch);
            while(scanf("%c",&ch)==1)
            {
                if(isalpha(ch)==0)
                    break;
                printf("%c",ch);
            }
            printf("ay%c",ch);
        }
        else if(isalpha(ch))
        {
            store=ch;
            while(scanf("%c",&ch)==1)
            {
                if(isalpha(ch)==0)
                    break;
                printf("%c",ch);
            }
            printf("%cay%c",store,ch);
        }
        else
            printf("%c",ch);
    }
    return 0;
}

