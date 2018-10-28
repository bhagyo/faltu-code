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
    int hou,min,hou1,min1,hou2,min2,temp;
    //while(1)
    {
        sf("%d %d %d %d",&hou1,&min1,&hou2,&min2);
        if(hou1>=hou2)
        {
            temp=60-min1+min2;
            min=abs(60-min1+min2)%60;
            if(temp>59)
                hou=24-hou1+hou2;
            else
                hou=24-hou1+hou2-1;
        }
        else
        {
            if(min1>min2)
            {
                min=min2+60-min1;
                hou=hou2-hou1-1;
            }
            else
            {
                min=min2-min1;
                hou=hou2-hou1;
            }
        }
        pf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hou,min);
    }
    return 0;
}








