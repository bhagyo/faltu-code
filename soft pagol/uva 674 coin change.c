#include <stdio.h>
long long ways[22];
void count()
{
    int coin[]= {1,3,5,10},i,j;
    ways[0]=1;
    for(i=0; i<5; i++)
        for(j=coin[i]; j<22; j++)
            ways[j]+=ways[j-coin [i]];
}
int main()
{
    count();
    int coin_val;
    while(scanf("%d",&coin_val)==1)
        printf("way = %lld\n",ways[coin_val]);
    return 0;
}
