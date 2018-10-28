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
typedef long double LLF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
typedef char C;

#define sf scanf
#define rtr return /* for return */
#define pf printf
#define wh while
#define PI acos(-1.0)
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,cases) for(i=0;i<cases;i++)
#define FOR1(i,cases) for(i=1;i<=cases;i++)
#define size 107

/******   start your code   *******/

void lower(C str[])
{
    int i,j;
    j=0;
    for(i=0; str[i]; i++)
        if(isalpha(str[i]))
        {
            str[i]=tolower(str[i]);
            str[j++]=str[i];
        }
    str[j]='\0';
}
void bubble_sort(C str[],int ar_len)
{
    int i,j;
    C temp;
    for(i=0; i<ar_len-1; i++)
        for(j=i+1; j<ar_len; j++)
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
}
C first[size],last[size];
int main()
{
    int i,j,k,cases,num;
    C ch;
    sf("%d%c",&cases,&ch);
    FOR1(k,cases)
    {
        gets(first);
        gets(last);
        lower(first);
        lower(last);
        bubble_sort(first,strlen(first));
        bubble_sort(last,strlen(last));
        pf("Case %d: ",k);
        (strcmp(first,last)==0)?pf("Yes\n"):pf("No\n");
    }
    return 0;
}
