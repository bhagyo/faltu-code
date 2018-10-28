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
#define size 1010
/******   start your code   *******/
void bubble_sort(C* str)
{
    int i,j;
    C temp;
    for(i=97;i<122;i++)
        for(j=i+1;j<123;j++)
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
}
C first[size],last[1010];
int main()
{
    int i,j,cases;
    while(gets(first))
    {
        bubble_sort(first);
        gets(last);
        bubble_sort(last);
        pf("%s %s\n",first,last);

    }
    return 0;
}




