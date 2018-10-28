#include<stdio.h>
#include<string.h>
int main()
{
    char a[205],b[205],c[205];
    int l,la,lb,i,j,k,h,s,p,q,n,m,u;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%s%s",a,b);
            la=strlen(a);
            lb=strlen(b);
            l=la;
            if(lb>l)
                l=lb;
            h=m=0;
            for(j=0; j<l; j++)
            {
                if(la>j)
                    p=a[j]-48;
                else
                    p=0;
                if(lb>j)
                    q=b[j]-48;
                else
                    q=0;
                s=p+q+h;
                c[m]=s%10+48;
                h=s/10;
                m++;
            }
            if(h>0)
            {
                c[m]=h+48;
                m++;
            }
            for(k=0; k<m; k++)
            {
                if(c[0]==48)
                    for(u=1; u<m; u++)
                    {
                        if(c[u]>48)
                            printf("%c",c[u]);
                        k++;
                    }
                else
                    printf("%c",c[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
