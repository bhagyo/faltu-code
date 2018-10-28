
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

C num1[5],num2[5],num3[5],num4[5];
int main()
{
    int cases,sum1,sum2,sumt;
    sf("%d\n",&cases);
    while(cases--)
    {
        sf("%s %s %s %s",num1,num2,num3,num4);
        sum1=sum2=sumt=0;
        sum1+=((num1[0]-48)*2)/10+((num1[0]-48)*2)%10+((num1[2]-48)*2)/10+((num1[2]-48)*2)%10;
        sum1+=((num2[0]-48)*2)/10+((num2[0]-48)*2)%10+((num2[2]-48)*2)/10+((num2[2]-48)*2)%10;
        sum1+=((num3[0]-48)*2)/10+((num3[0]-48)*2)%10+((num3[2]-48)*2)/10+((num3[2]-48)*2)%10;
        sum1+=((num4[0]-48)*2)/10+((num4[0]-48)*2)%10+((num4[2]-48)*2)/10+((num4[2]-48)*2)%10;
        sum2=num1[1]-48+num1[3]-48+num2[1]-48+num2[3]-48+num3[1]-48+num3[3]-48+num4[1]-48+num4[3]-48;
        sumt=sum1+sum2;
        if(sumt%10==0)
            pf("Valid\n");
        else
            pf("Invalid\n");
    }
    return 0;
}
