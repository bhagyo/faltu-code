#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,b[3010],a[3010],i,l,j,temp;
    while(scanf("%d",&n)==1)
    {
        c=1;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n-1; i++)
            b[i]=abs(a[i+1]-a[i]);
        for(l=0; l<n-2; l++) ///bubble sort
            for(j=l+1; j<n-1; j++)
            {
                if(b[l]>=b[j])
                {
                    temp=b[l];
                    b[l]=b[j];
                    b[j]=temp;
                }
            }
        for(i=1; i<n; i++)
            if(b[i]==b[i-1])
            {
                c=0;
                break;
            }
        for(i=0;i<n;i++)
            printf("%d ",b[i]);
        printf("\n");
        /**if(c==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");*/
    }
    return 0;
}
