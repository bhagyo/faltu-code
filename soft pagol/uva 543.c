#include<stdio.h>
#include<math.h>
int main()
{
    long num,i,j,bin,paici,a,b,p,q,gc,store,temp;
    while(scanf("%ld",&num)==1)
    {
        if(num==0)
            break;
        gc=1;
        for(i=3; i<=num; i+=2)
        {
            bin=1;
            paici=1;
            store=i;
            temp=num-i;
            if(store>temp)
                break;
            if(store&1)
            {
                p=(int)sqrt(store);
                for(j=3; j<=p; j+=2)
                    if(store%j==0)
                    {
                        bin=0;
                        break;
                    }
                if(bin==1)
                    if(temp&1)
                    {
                        q=(int)sqrt(temp);
                        for(j=3; j<=q; j+=2)
                            if(temp%j==0)
                            {
                                paici=0;
                                break;
                            }
                        if(paici==1)
                        {
                            printf("%ld = %ld + %ld\n",num,store,temp);
                            gc=0;
                            break;
                        }
                    }
            }
        }
        if(gc==1)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
