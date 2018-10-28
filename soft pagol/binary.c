#include<stdio.h>
int main()
{
    int i,n,m,s,x,a[100];
    while(scanf("%d",&n)!=EOF)
{
    i=0;
    while(n>0)
    {
        x=n/2;
        s=n%2;
        n=x;
        a[i]=s;
        i++;
    }
    for(m=i-1; m>=0; m--)
        printf("%d",a[m]);
    printf("\n");
}
return 0;

}
