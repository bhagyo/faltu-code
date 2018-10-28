#include <stdio.h>
#include <string.h>
#include <math.h>
char str[2020];
long freq[150];
int main()
{
    long i,j,a,b,cases,fal,count=0,ck=1,store;
    scanf("%ld",&cases);
    while(cases--)
    {
        ck=1;
        fal=0;
        scanf("%s",&str);
        for(i=0; str[i]; i++)
            freq[str[i]]++;
        count++;
        printf("Case %ld: ",count);
        for(j=48; j<=122; j++)
            if(freq[j]!=0)
            {
                fal=1;
                store=sqrt(freq[j])+1;
                for(i=2; i<=store; i++)
                if(freq[j]%i==0)
                {
                    fal=0;
                    break;
                }
                if(freq[j]>1)
                if(freq[j]==2||fal==1||freq[j]==3)
                {
                    printf("%c",j);
                    ck=0;
                }
            }
        if(ck)
            printf("empty");
        printf("\n");
        for(i=0; i<150; i++)
            freq[i]=0;
    }
    return 0;
}
