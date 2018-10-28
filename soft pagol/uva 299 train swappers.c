#include<stdio.h>
int main()
{
    int train[10000],i,j,l,y,ck,temp,dabba,cases,count;
    while(scanf("%d",&cases)==1)
    {
        while(cases--)
        {
            count=0;
            scanf("%d",&dabba);
            for(i=0; i<dabba; i++)
                scanf("%d",&train[i]);
            for(l=0; l<dabba-1; l++)
                for(j=l+1; j<dabba; j++)
                    if(train[l]>=train[j])
                    {
                        count++;
                        temp=train[l];
                        train[l]=train[j];
                        train[j]=temp;
                    }
            printf("Optimal train swapping takes %d swaps.\n",count);
            /**for(i=0; i<dabba; i++)
                printf("%d ",train[i]);
            printf("count = %d\n",count);*/
        }
    }
    return 0;
}
