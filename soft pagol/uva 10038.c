#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,ck,l,n,temp,ara1[3010],ara2[3010];
    while(scanf("%d",&n)==1)
    {
        ck=1;
        for(i=0; i<n; i++)
            scanf("%d",&ara1[i]);
        for(i=0; i<n-1; i++)
            ara2[i]=abs(ara1[i+1]-ara1[i]);
        for(l=0; l<n-2; l++) ///bubble sort
            for(j=l+1; j<n-1; j++)
                if(ara2[l]>=ara2[j])
                {
                    temp=ara2[l];
                    ara2[l]=ara2[j];
                    ara2[j]=temp;
                }
        for(i=0; i<n-2; i++)
            if((ara2[i+1]-ara2[i])!=1)
            {
                ck=0;
                break;
            }
        if(ck==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
