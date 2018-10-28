#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int i,j,k;
    while(gets(str))
    {
        k=strlen(str);
        for(i=0;i<k;i++)
            printf("%c",str[i]-7);
        printf("\n");
    }
    return 0;
}
