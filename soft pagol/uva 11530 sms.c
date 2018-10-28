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
#define FOR(i,cases) for(i=0;i<cases;i++)
#define FOR1(i,cases) for(i=1;i<=cases;i++)
#define size 109
/******   start your code   *******/

C str[size],ch;
int main()
{
    int i,j,k,cases;
    LD count;
    sf("%d%c",&cases,&ch);
    FOR1(k,cases)
    {
        count=0;
        gets(str);
        for(j=0; str[j]; j++)
        {
            switch(str[j])
            {
            case 'a':
            case 'd':
            case 'g':
            case 'j':
            case 'm':
            case 'p':
            case 't':
            case 'w':
            case ' ':
                count=count+1;
                break;
            case 'b':
            case 'e':
            case 'h':
            case 'k':
            case 'n':
            case 'q':
            case 'u':
            case 'x':
                count=count+2;
                break;
            case 'c':
            case 'f':
            case 'i':
            case 'l':
            case 'o':
            case 'r':
            case 'v':
            case 'y':
                count=count+3;
                break;
            case 's':
            case 'z':
                count=count+4;
                break;
            }
        }
        pf("Case #%d: %ld\n",k,count);
    }
    return 0;
}
