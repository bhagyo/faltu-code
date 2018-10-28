#include<stdio.h>
int main()
{
    long long int num1,num2,num3,num11,num22,num33;
    while(scanf("%lld %lld %lld",&num1,&num2,&num3)==3)
    {
        if(num1==0&&num2==0&&num3==0)
            break;
        num11=num1*num1;
        num22=num2*num2;
        num33=num3*num3;
        if(num11==(num22+num33))
            printf("right\n");
        else if(num22==(num11+num33))
            printf("right\n");
        else if(num33==(num11+num22))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
