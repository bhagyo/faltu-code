#include<stdio.h>
int main()
{
    unsigned long long int num,sum;
    while(scanf("%llu",&num)!=EOF)
    {
        sum=((num*(num+2))/2)*3-6;
        printf("%llu\n",sum);
    }
    return 0;
}
