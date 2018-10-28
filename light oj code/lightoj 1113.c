/******   HAREE KRISHNA   *******/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
/*#include<algorithm>*/

/*using namespace std;*/
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
#define size 101
#define size1 55

/******   start your code   *******/

int main()
{
    int i,j,nul,k,cases,num,val;
    C web[size][size1];
    C catgry[size1];
    strcpy(web[0],"http://www.lightoj.com/");
    sf("%d",&cases);
    getchar();
    FOR1(j,1,cases)
    {
        nul=k=0;
        pf("Case %d:\n",j);
        while(sf("%s",catgry)==1)
        {
            if(strcmp(catgry,"QUIT")==0)
                break;
            if(strcmp(catgry,"VISIT")==0) // for "VISIT"
            {
                sf("%s",web[++nul]);
                pf("%s\n",web[nul]);
                k=nul;
            }
            else if(strcmp(catgry,"BACK")==0)
            {
                if(nul>0)
                    pf("%s\n",web[--nul]);
                else
                    pf("Ignored\n");
            }
            else if(strcmp(catgry,"FORWARD")==0)
            {
                if(k>nul)
                    pf("%s\n",web[++nul]);
                else if(k<=nul)
                    pf("Ignored\n");
            }
        }
    }
    return 0;
}
