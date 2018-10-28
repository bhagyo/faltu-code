/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
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
#define size 1999999

/******   start your code   *******/

int main()
{
    int i;
    LF taka;
    while(sf("%lf",&taka)==1)
    {
        pf("NOTAS:\n");
        for(i=0; taka>=100.0; i++)
            taka=taka-100;
        pf("%d nota(s) de R$ 100.00\n",i);
        for(i=0; taka>=50.00; i++)
            taka=taka-50;
        pf("%d nota(s) de R$ 50.00\n",i);
        for(i=0; taka>=20.00; i++)
            taka=taka-20;
        pf("%d nota(s) de R$ 20.00\n",i);
        for(i=0; taka>=10.00; i++)
            taka=taka-10;
        pf("%d nota(s) de R$ 10.00\n",i);
        for(i=0; taka>=5; i++)
            taka=taka-5;
        pf("%d nota(s) de R$ 5.00\n",i);
        for(i=0; taka>=2.0; i++)
            taka=taka-2;
        pf("%d nota(s) de R$ 2.00\n",i);
        pf("MOEDAS:\n");
        for(i=0; taka>=1.00; i++)
            taka=taka-1;
        pf("%d moeda(s) de R$ 1.00\n",i);
        for(i=0; taka>=0.50; i++)
            taka=taka-0.50;
        pf("%d moeda(s) de R$ 0.50\n",i);
        for(i=0; taka>=0.25; i++)
            taka=taka-0.25;
        pf("%d moeda(s) de R$ 0.25\n",i);
        for(i=0; taka>=0.10; i++)
            taka=taka-0.10;
        pf("%d moeda(s) de R$ 0.10\n",i);
        for(i=0; taka>=0.05; i++)
            taka=taka-0.05;
        pf("%d moeda(s) de R$ 0.05\n",i);
        for(i=0; taka>=0.01; i++)
            taka=taka-0.01;
        pf("%d moeda(s) de R$ 0.01\n",i);
    }
    return 0;
}








