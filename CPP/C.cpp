/* ===================================*/
/* Author :   Moshiur Rahman Mohim    */
/* Email  :   mtmohim74@gmail.com     */
/* Institute: HSTU                    */
/* ===================================*/

#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>

#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using  namespace  std;

const int INF = 0x7f7f7f7f;

#define pi              acos(-1.0)
#define mod             1000000007
#define MAX             10000
#define FOR(i, b, n)    for(LL i=b; i<=n; i++)
#define FORR(i, n, b)   for(LL i=n; i>=b; i--)
// Library.
#define mem(a,b)        memset(a,b,sizeof(a))
#define Sort(x)         sort(x.begin(),x.end())
#define Reverse(x)      reverse(x.begin(),x.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a * (b / gcd(a,b)))
#define sq(x)           (x)*(x)
// File.
#define READ(f)         freopen(f, "r", stdin)
#define WRITE(f)        freopen(f, "w", stdout)
// i/o.
#define sf              scanf
#define pf              printf
#define pr1(x)          cout<<x<<"\n"
#define pr2(x,y)        cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)      cout<<x<<" "<<y<<" "<<z<<"\n"
// Test Case.
#define TEST(i,t)       LL i,t;scanf("%lld",&t);for(i=1;i<=t;i++)

typedef unsigned int            U;
typedef long int                L;
typedef unsigned long int       LU;
typedef long long int           LL;
typedef unsigned long long int  LLU;
typedef float                   F;
typedef double                  LF;
typedef char                    C;

//STL
typedef vector<LL>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<LL,LL>pll;
typedef pair<LF,LF>pdd;
typedef vector<pii> vpii;

// Compute b^p%m
int BigMod(LL B,LL P,LL M)
{
    LL R=1;
    while(P>0)
    {
        if(P%2==1)
            R=(R*B)%M;
        P/=2;
        B=(B*B)%M;
    }
    return (int)R;
}

/*............End............*/
/*.......Global Declaration.......*/
C ch[110];
int main()
{
    LL l,r,n,m,a,b,c;
    TEST(tt,t)
    {
        scanf("%lld%lld",&l,&r);
        if(l!=0)
        {
            l=l-1;
            if(l%4==2 || l%4==3)
            {
                n=(l/4)+1;
                a=4*n*n;
            }
            else if(l%4==0)
            {
                n=(l/4);
                a=(((((n+1)*(n+1))*4)+((n*n))*4)/2)-2;
            }
            else
            {
                n=(l/4);
                a=(((((n+1)*(n+1))*4)+((n*n))*4)/2)-1;
            }
        }
        else
            a=0;
        if(r!=0)
        {
            if(r%4==2 || r%4==3)
            {
                n=(r/4)+1;
                b=4*n*n;
            }
            else if(r%4==0)
            {
                n=(r/4);
                b=(((((n+1)*(n+1))*4)+((n*n))*4)/2)-2;
            }
            else
            {
                n=(r/4);
                b=(((((n+1)*(n+1))*4)+((n*n))*4)/2)-1;
            }
        }
        else
            b=0;
        printf("%lld\n",b-a);
    }
    return 0;
}
