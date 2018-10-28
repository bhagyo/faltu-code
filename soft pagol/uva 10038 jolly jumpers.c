#include<stdio.h>
#include<math.h>
int main()
{
    int ck,ara[3002],store[3001],len,temp;
    int i,j,k,l,m;
    while(scanf("%d",&len)==1)
    {
        ck=1;
        for(i=0;i<len;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<len-1;i++)
            store[i]=abs(ara[i+1]-ara[i]);
        for(i=0;i<len-2;i++)
            for(j=i+1;j<len-1;j++)
                if(store[i]>store[j])
                {
                    temp=store[i];
                    store[i]=store[j];
                    store[j]=temp;
                }
        for(i=0;i<len-1;i++)
            if(store[i+1]==store[i])
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
