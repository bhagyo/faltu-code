#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
typedef char C;
#define sf scanf
#define pf printf
#define wh while
#define PI acos(-1.0)
#define size 105
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

/******   start your code   *******/

int main()
{
    LF u,v,s,t,a;
    int i,j,n,cases;
    cases=1;
    while(sf("%d",&n)==1)
    {
        if(n==0)
            break;
        else if(n==1)
        {
            sf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+(0.5*a*t*t);
            pf("Case %d: %.3lf %.3lf\n",cases,s,a);
        }
        else if(n==2)
        {
            sf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+(0.5*a*t*t);
            pf("Case %d: %.3lf %.3lf\n",cases,s,t);
        }
        else if(n==3)
        {
            sf("%lf %lf %lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            pf("Case %d: %.3lf %.3lf\n",cases,v,t);
        }
        else
        {
            sf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            pf("Case %d: %.3lf %.3lf\n",cases,u,t);
        }
        cases++;
    }
    return 0;
}
