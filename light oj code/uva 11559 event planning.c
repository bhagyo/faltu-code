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
    LD parti,budget,hotels,weeks,price,money,room,min=0,cost,store;
    int i,j,k,l;
    while(sf("%ld %ld %ld %ld",&parti,&budget,&hotels,&weeks)==4)
        for(k=0;k<hotels;k++)
        {
            sf("%ld",&price);
            for(i=0;i<weeks;i++)
            {
                sf("%ld",&room);
                if(room>=parti)
                {
                    cost=price*parti;
                    if(>min)

                }
            }
        }
    return 0;
}












