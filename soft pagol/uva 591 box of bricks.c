#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p,cases=1;
    int boxes,cary[101],avg,sum,ans;
    while(scanf("%d",&boxes)==1&&boxes!=0)
    {
        sum=ans=0;
        for(i=0;i<boxes;i++)
        {
            scanf("%d",&cary[i]);
            sum+=cary[i];
        }
        avg=sum/boxes;
        for(i=0;i<boxes;i++)
            if(cary[i]>avg)
                ans+=(cary[i]-avg);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",cases,ans);
        cases++;
    }
    return 0;
}
