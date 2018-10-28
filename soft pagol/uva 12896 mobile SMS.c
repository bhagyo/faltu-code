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

int main()
{
    int cases,press,m,i,j,k,l;
    int button[1001],time[1001];
    sf("%d",&cases);
    char er = '"';
    while(cases--)
    {
        sf("%d",&press);
        for(i=0;i<press;i++)//what's the button
            sf("%d",&button[i]);
        for(i=0;i<press;i++)// how many time to press
            sf("%d",&time[i]);
        for(j=0;j<press;j++)
        {
            if(button[j]==0)
                if(time[j]==1)
                 pf(" ");
            if(button[j]==1)
            {
                if(time[j]==1)
                    pf(".");
                else if(time[j]==2)
                    pf(",");
                else if(time[j]==3)
                    pf("?");
                else pf("%c",er);
            }
            if(button[j]==2)
            {
                if(time[j]==1)
                    pf("a");
                else if(time[j]==2)
                    pf("b");
                else if(time[j]==3)
                    pf("c");
            }
            if(button[j]==3)
            {
                if(time[j]==1)
                    pf("d");
                else if(time[j]==2)
                    pf("e");
                else if(time[j]==3)
                    pf("f");
            }
            if(button[j]==4)
            {
                if(time[j]==1)
                    pf("g");
                else if(time[j]==2)
                    pf("h");
                else if(time[j]==3)
                    pf("i");
            }
            if(button[j]==5)
            {
                if(time[j]==1)
                    pf("j");
                else if(time[j]==2)
                    pf("k");
                else if(time[j]==3)
                    pf("l");
            }
            if(button[j]==6)
            {
                if(time[j]==1)
                    pf("m");
                else if(time[j]==2)
                    pf("n");
                else if(time[j]==3)
                    pf("o");
            }
            if(button[j]==7)
            {
                if(time[j]==1)
                    pf("p");
                else if(time[j]==2)
                    pf("q");
                else if(time[j]==3)
                    pf("r");
                else pf("s");
            }
            if(button[j]==8)
            {
                if(time[j]==1)
                    pf("t");
                else if(time[j]==2)
                    pf("u");
                else if(time[j]==3)
                    pf("v");
            }
            if(button[j]==9)
            {
                if(time[j]==1)
                    pf("w");
                else if(time[j]==2)
                    pf("x");
                else if(time[j]==3)
                    pf("y");
                else pf("z");
            }
        }
        pf("\n");
    }
    return 0;
}
