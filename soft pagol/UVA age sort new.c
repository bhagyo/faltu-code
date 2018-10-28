#include<stdio.h>
#define max 2000005
long int ara[max],new_ara[max];
int main()
{
    long int i,j,k,l,big,cases;
    while(scanf("%ld",&cases)==1)
    {
        if(cases==0)
            break;
        k=big=0;
        for(i=0; i<max; i++)
            ara[i]=new_ara[i]=0;
        for(i=0; i<cases; i++)
        {
            scanf("%ld",&j);
            ara[j]++;
            if(j>big)
                big=j;
        }
        for(i=0; i<=big; i++)
            for(j=0; j<ara[i]; j++)
            {
                new_ara[k]=i;
                k++;
            }
        for(i=0; i<k; i++)
        {
            printf("%ld",new_ara[i]);
            if(i<k-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
