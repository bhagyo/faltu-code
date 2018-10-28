#include<stdio.h>

int main()
{
    long long store,num1,num,save;
    int count=1;
    while (scanf("%lld",&num)==1)
    {
        save=num;
        printf("%4d.",count);
        if(num==0)
        {
            printf(" 0\n");
            count++;
            continue;
        }
        num1=num/100000000000000;
        if(num1>0)
            printf(" %lld kuti",num1);
        num=num%100000000000000;
        num1=num/1000000000000;
        if(num1>0)
            printf(" %lld lakh",num1);
        num=num%1000000000000;
        num1=num/10000000000;
        if(num1>0)
            printf(" %lld hajar",num1);
        num=num%10000000000;
        num1=num/1000000000;
        if(num1>0)
            printf(" %lld shata",num1);
        num=num%1000000000;
        num1=num/10000000;
        if(num1==0&&save>10000000)
            printf(" kuti");
        if(num1>0)
            printf(" %lld kuti",num1);
        num=num%10000000;
        num1=num/100000;
        if(num1>0)
            printf(" %lld lakh",num1);
        num=num%100000;
        num1=num/1000;
        if(num1>0)
            printf(" %lld hajar",num1);
        num=num%1000;
        num1=num/100;
        if(num1>0)
            printf(" %lld shata",num1);
        num=num%100;
        num1=num/1;
        if(num1>0)
            printf(" %lld",num1);
        printf("\n");
        count++;
    }
    return 0;
}
