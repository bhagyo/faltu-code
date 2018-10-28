/******   HAREE KRISHNA   *******/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>

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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,x,cases) for(i=x;i<=cases;i++)
#define FOR2(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 10

/******   start your code   *******/

bool leap(LD year)
{
    if((year%4)==0 && (year%100)!=0)
        return true;
    else if(year%400==0)
        return true;
    return false;
}
int main()
{
    int i,j,k,cases;
    C ck;
    C mon1[size],mon2[size];
    int day1,day2;
    int count;
    LD year1,year2;
    sf("%d",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        count=0;
        sf("%s %d, %ld",mon1,&day1,&year1);
        sf("%s %d, %ld",mon2,&day2,&year2);
        pf("Case %d: ",k);
        if(leap(year1))
            if(strcmp(mon1,"January")==0 || strcmp(mon1,"February")==0)
                count++;
        if(leap(year2))
        {
            if(strcmp(mon2,"January")!=0 || strcmp(mon2,"February")!=0)
                count++;
            else if(strcmp(mon2,"February")==0 && day2==29)
                count++;
        }
        if(year1==year2 && leap(year1))
            count--;
        if(year2-year1>1)
            count+=(year2-1)/4-(year2-1)/100+(year2-1)/400-year1/4+year1/100-year1/400;
        pf("%d\n",count);
    }
    return 0;
}
