#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,ck=0,len;
    char str[100001];
    while(gets(str))
    {
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='"')
            {
                if(ck%2==0)
                    printf("``");
                else
                    printf("''");
                ck++;
            }
            else
                printf("%c",str[i]);
        }
    }
    return 0;
}
