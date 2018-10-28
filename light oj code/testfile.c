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
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")

/******   start your code   *******/

#define size 1000
C num[size];
int main()
{
    int i,j,k,l,number,store,val,temp;
    while(sf("%d",&number)==1)
    {
        temp=val=0;store=number;
        while(store)
        {
            num[val++]=store%10;
            store/=10;
        }
        FOR(i,2,number)
        {
            for(j=0;j<val;j++)
            {
                store=num[j]*i+temp;
                num[j]=store%10;
                temp=store/10;
            }
            while(temp)
            {
                num[val++]=temp%10;
                temp/=10;
            }
        }
        FOR(i,val-1)
    }
    return 0;
}










