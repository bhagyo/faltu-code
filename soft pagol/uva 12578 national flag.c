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
    LF length,rad,rad_area;
    int cases;
    sf("%d",&cases);
    while(cases--)
    {
        sf("%lf",&length);
        rad=length*0.2;
        rad_area=rad*rad*PI;
        pf("%0.2lf %0.2lf\n",rad_area,(length*(length*0.6))-rad_area);
    }
    return 0;
}








