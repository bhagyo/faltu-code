#include<stdio.h>
#include<string.h>
#include<ctype.h>
char str[130];
int main()
{
    int i,j,k,l,paren,len,brac,cases,ck,ck_paren,ck_brac,fal_paren,fal_brac,see;
    char ch;
    scanf("%d%c",&cases,&ch);
    while(cases--)
    {
        printf("that's dude %d\n\\n\n",cases);
        k=brac=paren=ck_brac=ck_paren=fal_brac=fal_paren=0;
        gets(str);
        len=strlen(str);
        if(len==2)
        {
            if((str[0]=='('&&str[1]==')')||str[0]=='['&&str[1]==']')
                printf("Yes\n");
            else
                printf("No\n");

        }
        else
        {
            for(i=0; i<len; i++)
            {
                if((ck_paren&ck_brac)==1)
                    break;
                if((ck_paren&1)==0)
                    if(str[i]==')')
                    {
                        ck_paren++;
                        fal_paren=i;
                    }
                if((ck_brac&1)==0)
                    if(str[i]==']')
                    {
                        ck_brac++;
                        fal_brac=i;
                    }
            }
            for(i=0; i<fal_brac; i++)
                if(str[i]=='[')
                {
                    ck_paren=0;
                    break;
                }
            for(j=0; j<fal_paren; j++)
                if(str[j]=='(')
                {
                    ck_paren=0;
                    break;
                }
            printf("( '(' ) = %d, ( '[' ) = %d\n",j,i);
            printf("fal_paren = %d,fal_brac = %d\n",fal_paren,fal_brac);
            for(i=0; i<len; i++)
                if((str[i]=='['&&str[i+1]==')')||(str[i]=='('&&str[i+1]==']'))
                {
                    printf("No\n  ck1\n");
                    k=1;
                    break;
                }
            if(k==0)
            {
                if(i==fal_brac)
                    printf("No\n  ck2\n");
                else if(j==fal_brac)
                    printf("No\n  ck3\n");
                else
                {
                    for(i=0; i<len; i++)
                    {
                        if(str[i]=='(')
                            paren++;
                        else if(str[i]==')')
                            paren--;
                        else if(str[i]=='[')
                            brac++;
                        else if(str[i]==']')
                            brac--;
                    }
                    if(paren==0 && brac==0)
                        printf("Yes\n  ck4\n");
                    else
                        printf("No\n  ck4\n");
                }
            }
        }
    }
    return 0;
}
