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
    int cases=0;
    C lang[20],ch='#';
    while(sf("%s",lang) && ++cases)
    {
        if(strcmp(lang,"#")==0)
            break;
        else if(strcmp(lang,"HELLO")==0)
            pf("Case %d: ENGLISH\n",cases);
        else if(strcmp(lang,"HOLA")==0)
            pf("Case %d: SPANISH\n",cases);
        else if(strcmp(lang,"HALLO")==0)
            pf("Case %d: GERMAN\n",cases);
        else if(strcmp(lang,"BONJOUR")==0)
            pf("Case %d: FRENCH\n",cases);
        else if(strcmp(lang,"CIAO")==0)
            pf("Case %d: ITALIAN\n",cases);
        else if(strcmp(lang,"ZDRAVSTVUJTE")==0)
            pf("Case %d: RUSSIAN\n",cases);
        else
            pf("Case %d: UNKNOWN\n",cases);
    }
    return 0;
}
