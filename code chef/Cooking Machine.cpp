#include<stdio.h>
#include<math.h>

int main()
{
    long long i,j,k,l,tc,m,res,num1,num2,total,store;
    double did;
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld %lld",&num1,&num2);
        if(num1==num2){
            printf("0\n");continue;}
        for(res=0;;res++)
        {
            did=log(num1)/log(2);
            store=ceil(did);
            if(((long)(log2(num1)))==store)
                break;
            if(num1&1)
            {
                num1=(num1-1)/2;
                continue;
            }
            else
                num1/=2;
        }
        while(num1!=num2)
        {
            if(num1<num2)
                num1*=2;
            else
                num1/=2;
            res++;
        }
        printf("%lld\n",res);
    }
    return 0;
}
