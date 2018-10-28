#include<stdio.h>
int main()
{
    int i,j,k,l,m,cases;
    int ampli,freq;
    scanf("%d",&cases);
    for(k=1; k<=cases; k++)
    {
        scanf("%d %d",&ampli,&freq);
        for(l=0; l<freq; l++)
        {
            for(i=1; i<=ampli; i++)/*upper bound*/
            {
                for(j=1; j<=i; j++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=ampli-1; i>=1; i--)/*lower bound*/
            {
                for(j=1; j<=i; j++)
                    printf("%d",i);
                printf("\n");
            }
            if(k!=cases||l!=freq-1) printf("\n");
        }
    }
    return 0;
}
