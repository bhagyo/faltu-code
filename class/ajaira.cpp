#include<bits/stdc++.h>
#define pf printf
using namespace std;
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++) pf(" ");

        for(j=1;j<=n-i;j++) pf("*");

        pf("\n");
    }
    return 0;
}
