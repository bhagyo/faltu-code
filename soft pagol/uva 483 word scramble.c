#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,j,ck,k;
    char line[1000];
    while(gets(line))
    {
        ck=-1;
        for(i=0; line[i]; i++)
        {
            if(line[i]==' ')
            {
                for(j=i-1; j>ck; j--)
                    printf("%c",line[j]);
                printf(" ");
                ck=i;
            }
        }
        i--;
        for(k=i; k>ck; k--)
            printf("%c",line[k]);
        printf("\n");
    }
    return 0;
}
