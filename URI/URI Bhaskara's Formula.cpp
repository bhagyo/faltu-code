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

int main()
{
    C faul[10];
    ld day1,hou1,min1,sec1,day2,hou2,min2,sec2,store;
    //while(1)
    {
        sf("%s %ld",faul,&day1);
        sf("%ld : %ld : %ld",&hou1,&min1,&sec1);
        sf("%s %ld",faul,&day2);
        sf("%ld : %ld : %ld",&hou2,&min2,&sec2);
        store=(day2*86400+hou2*3600+min2*60+sec2)-(day1*86400+hou1*3600+min1*60+sec1);
        pf("%ld dia(s)\n",store/86400);
        pf("%ld hora(s)\n",(store%86400)/3600);
        pf("%ld minuto(s)\n",((store%86400)%3600)/60);
        pf("%ld segundo(s)\n",((store%86400)%3600)%60);
    }
    return 0;
}










