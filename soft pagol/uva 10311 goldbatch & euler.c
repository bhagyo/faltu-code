#include<stdio.h>
#include<math.h>
int main()
{
    long num,i,j,bin,paici,a,b,p,q,gc,store,temp;
    while(scanf("%ld",&num)==1)
    {
        if(num==0||num==1||num==2||num==3||num==4||num==6)
            printf("%ld is not the sum of two primes!con\n",num);
        else if(num==5)
            printf("5 is the sum of 2 and 3.\n");
        else
        {
            gc=1;
            for(i=2; i<=num; i+=2)
            {
                bin=1;
                paici=1;
                store=i;
                temp=num-i;
                if((store&1)||store==2)
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
                                printf("%ld is the sum of %ld and %ld.con2\n",num,store,temp);
                                gc=0;
                                break;
                            }
                        }
                }
                if(i==2)
                    i++;
            }
            if(gc==1)
                printf("%ld is not the sum of two primes!con3\n",num);
        }
    }
    return 0;
}
