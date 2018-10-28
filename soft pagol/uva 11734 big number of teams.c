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
    int cases,i,j,k,l,m,o,ck,err,len;
    C team[25],judge[25],team_new[25],ch;
    sf("%d%c",&cases,&ch);
    for(l=1; l<=cases; l++)
    {
        gets(team);
        gets(judge);
        pf("Case %d: ",l);
        if(strcmp(team,judge)==0)
            printf("Yes\n");
        else
        {
            ck=err=k=0;
            for(j=0; team[j]; j++)
                if((team[j]>='a'&&team[j]<='z')||(team[j]>='A'&&team[j]<='Z'))
                    team_new[k++]=team[j];
            team_new[k]='\0';
            for(i=0; judge[i]; i++)
                if(judge[i]!=team_new[i])
                {
                    err=1;
                    break;
                }
            if((i==k) && err==0)
                pf("Output Format Error\n");
            else
                pf("Wrong Answer\n");
        }
    }
    return 0;
}
