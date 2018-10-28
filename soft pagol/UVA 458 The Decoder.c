#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
typedef int D;
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
#define pi 2*acos(0.0)

/**#*#*#*#*#*#*********start your code*********#*#*#*#*#*#*#*/

int main()
{
    C sentence[10000];
    D i,l,k;
    while(gets(sentence))
    {
        l=strlen(sentence);
        for(i=0; i<l; i++)
            pf("%c",sentence[i]-7);
        pf("\n");
    }
    return 0;
}

