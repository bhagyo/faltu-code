#include<stdio.h>
int perfect_number(int n);
int main()
{
    int n,i,test;
    while(scanf("%d",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%d",&n);
            if(n==perfect_number(n))
            {
                printf("%d eh perfeito\n",n);
            }
            else
                printf("%d nao eh perfeito\n",n);
        }
    }
    return 0;
}
int perfect_number(int n)
{
    int i=1,per_num=0;
    while(i<n)
    {
        if(n%i==0)
            per_num=per_num+i;
        i++;
    }
    if(per_num==n)
        return n;
}
