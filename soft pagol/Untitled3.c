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
#define size 199999
/******   start your code   *******/

C word[2020];
int main()
{
    int i,j,cases;
    while(sf("%s",word)==1&&word!="#")
    {
        pf("word = %s\n",word);
        if(word=="#")
            break;
        if(word=="HELLO")
            printf("ENGLISH\n");

        else if(word=="HOLA")
            printf("SPANISH\n");

        else if(word=="HALLO")
            printf("GERMAN\n");

        else if(word=="BONJOUR")
            printf("FRENCH\n");

        else if(word=="CIAO")
            printf("ITALIAN\n");

        else if(word=="ZDRAVSTVUJTE")
            printf("RUSSIAN\n");

        else
            printf("UNKNOWN\n");
    }
    return 0;
}












