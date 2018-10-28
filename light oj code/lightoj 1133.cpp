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
#define size 110

/******   start your code   *******/

int str[size];
char ch;
int main()
{
    int i,j,k,cases,n,m,num,x,y,temp;
    C ch;
    sf("%d",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        scanf("%d %d",&n,&m);
        getchar();
        FOR(i,0,n)
        sf("%d",&str[i]);
        getchar();
        while(m--)
        {
            scanf("%c",&ch);
            if(ch=='P')
            {
                scanf(" %d %d",&x,&y);
                getchar();
                swap(str[x],str[y]);
            }
            else if(ch=='R')
            {
                getchar();
                i=0,j=n;
                while(i<j/2)
                {
                    temp=str[i];
                    str[i]=str[j-i-1];
                    str[j-i-1]=temp;
                    i++;
                }
            }
            else if(ch=='S')
            {
                int num;
                scanf(" %d",&num);
                getchar();
                FOR(i,0,n)
                str[i]+=num;
            }
            else if(ch=='M')
            {
                int num;
                scanf(" %d",&num);
                getchar();
                FOR(i,0,n)
                str[i]*=num;
            }
            else
            {
                int num;
                scanf(" %d",&num);
                getchar();
                FOR(i,0,n)
                str[i]/=num;
            }
        }
        printf("Case %d:\n",k);
        FOR(i,0,n)
        {
            pf("%d",str[i]);
            if(i!=(n-1))
                pf(" ");
        }
        nn;
    }
    return 0;
}
