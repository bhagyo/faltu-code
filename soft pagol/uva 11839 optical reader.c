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

int num[5];
int main()
{
    int i,j,cases,ck,count,exam;
    while(sf("%d",&cases)==1&&cases!=0)
        while(cases--)
        {
            ck=count=0;
            for(i=0;i<5;i++)
            {
                sf("%d",&num[i]);
                if(num[i]<=127)
                {
                    count++;
                    ck=i;
                    //pf("ck = %d\n",i);
                }
            }
            if(count==1)
            {
                if(ck==0)
                    pf("A\n");
                else if(ck==1)
                    pf("B\n");
                else if(ck==2)
                    pf("C\n");
                else if(ck==3)
                    pf("D\n");
                else
                    pf("E\n");
            }
            else
                pf("*\n");
        }
    return 0;
}












