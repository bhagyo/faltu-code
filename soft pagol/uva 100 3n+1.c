#include<stdio.h>
int main()
{
    long  num1,num2,i,k,j,count,max;
    while(scanf("%ld %ld",&num1,&num2)==2)
    {
        printf("%ld %ld",num1,num2);
        max=0;
        if(num1>num2)
        {
            k=num2;
            num2=num1;
            num1=k;
        }
        for(i=num1; i<=num2; i++)
        {
            count=1;
            j=i;
            while(j > 1)
            {
                if((j&1)==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                count++;
            }
            if(count>=max)
                max=count;
        }
        printf(" %ld\n",max);
    }
    return 0;
}
