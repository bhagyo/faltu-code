#include<cstdio>
#include<iostream>
using namespace std;
long long H(int n)
{
    long long res = 0;
    for( int i = 1; i <= n; i=i+1 )
        res = (res + n/i);
    return res;
}
int main()
{
    long long int num,cases;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&num);
        printf("%lld\n",H(num));
    }
    return 0;
}
