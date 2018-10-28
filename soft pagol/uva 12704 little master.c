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
    int i,j,cases;
    float co_x,co_y,rad,store,shortt,longg;
    sf("%d",&cases);
    while(cases--)
    {
        sf("%f %f %f",&co_x,&co_y,&rad);
        store=sqrt((co_x*co_x)+(co_y*co_y));
        shortt=rad-store;
        longg=rad+store;
        pf("%0.2f %0.2f\n",shortt,longg);
    }
    return 0;
}











