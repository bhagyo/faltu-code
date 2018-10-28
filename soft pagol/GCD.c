#include<stdio.h>
long gcd(long a, long b)
{
    long r, i;
    while(b!=0)
    {
        r=b;
        b=a%b;
        a=r;
    }
    return a;
}
