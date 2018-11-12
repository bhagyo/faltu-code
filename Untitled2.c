#include<stdio.h>

int xGCD(int a, int b, int &x, int &y)
{
    long x1, y1;
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    long gcd = xGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

int main()
{
    long x,y;
    long res,num1,num2;
    while(sf("%ld %ld",&num1,&num2)==2)
    {
        res=xGCD(num1,num2,*x,*y);
        pf("%ld %ld %ld\n",x,y,res);
    }
    return 0;
}
