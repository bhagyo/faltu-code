/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef float f;
typedef double lf;
typedef unsigned int u;
typedef unsigned long int lu;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 10000
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

/******   start your code   *******/
int modulo(int a,int b,int c)
{
    lld x=1,y=a;
    while(b>0)
    {
        if(b&1)
            x=(x*y)%c;
        y=(y*y)%c;
        b/=2;
    }
    return x%c;
}
int main()
{
    int i,j,l,k,cases;
    C ch;
    sf("%d",&cases);
    getchar();
    for(i=1;i<=cases;i++)
    {
        sf("%d %d %d",&j,&l,&k);
        pf("%d\n",modulo(j,l,k));
    }
    return 0;
}










