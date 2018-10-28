/******   HAREE KRISHNA   *******/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define size 199999
/******   start your code   *******/

int main()
{
    long double max,result,a,b,c,area;
    while(sf("%Lf%Lf%Lf",&a,&b,&c)==3)
    {
        max=0;
        if(max<a) max=a;
        if(max<b) max=b;
        if(max<c) max=c;
        if(a==0||b==0||c==0)
            printf("-1.000\n");
        else if(a+b+c-max<=max)
            pf("-1.000\n");
        else
        {
            result=(2*(a*a*b*b+b*b*c*c+c*c*a*a))-((pow(a,4)+pow(b,4)+pow(c,4)));
            area=((sqrt(result))/3);
            pf("%.3Lf\n",area);
        }
    }
    return 0;
}
