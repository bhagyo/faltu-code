#include <stdio.h>
int main()
{
    char str[101];
    int val[101],b,ck,d,i,j,k,l,n,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",str);
        for(j=0; str[j]; j++)
        {
            if(str[j]=='O')
                val[j]=1;
            else if(str[j]='X')
                val[j]=0;
        }
        ck=0,sum=0;
        for(k=0; str[k]; k++)
        {
            if(val[k]==1)
                ck++;
            if(val[k]==0)
                ck=0;
            sum=sum+ck;
        }
        printf("%d\n",sum);
    }
    return 0;
}
