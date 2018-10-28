#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define pi 2*acos(0.0)
typedef int D;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;

/** start your code*/

int fact(int n)
{
    if(n==1)
        return;
    return n*fact(n-1);
}

int main()
{
    int x,j;
    scanf("%d",&x);
    j=fact(x);
    printf("%d\n",j);
    return 0;
}





















