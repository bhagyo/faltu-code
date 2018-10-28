#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define pi 2*acos(0.0)
#define MAX 1000
typedef int D;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
/** start your code*/
int main()
{
    int i,j;
    char str[MAX],rev_str[MAX];
    while(sf("%s",str)!=EOF)
    {
        j=strlen(str);
        for(i=0; str[i]!='\0'; i++,j--)
            rev_str[j-1]=str[i];
        rev_str[i]='\0';
        pf("%s\n",rev_str);
    }
    return 0;
}









