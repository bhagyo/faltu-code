#include<stdio.h>
int main()
{
    long long int num,num_ar[1000],j;
    int store,i,k;
    while(scanf("%lld",&num)==1)
    {
        if(num<0)
            break;
        else if(num==0)
            printf("0\n");
        else
        {
            i=0;
            while(num!=0)
            {
                num_ar[i++]=(num%3);
                num/=3;
            }
            num_ar[i]='\0';
            i--;
            for(k=i;k>=0;k--)
                printf("%lld",num_ar[k]);
            printf("\n");
        }
    }
    return 0;
}
