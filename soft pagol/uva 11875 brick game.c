#include<stdio.h>
int main()
{
    int number,cases,age[100],i,j;
    scanf("%d",&cases);
    for(i=1; i<=cases; i++)
    {
        scanf("%d",&number);
        for(j=0; j<number; j++)
            scanf("%d",&age[j]);
        printf("Case %d: %d\n",i,age[j/2]);
    }
    return 0;
}
