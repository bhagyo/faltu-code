/******   HAREE KRISHNA   *******/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
/*#include<algorithm>*/

/*using namespace std;*/
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FOR1(i,x,cases) for(i=x;i<=cases;i++)
#define FOR2(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 1999999

/******   start your code   *******/

int bin[40];
int main()
{
    int cases,k,count,i,l;
    C ch;
    LLD num,store,j,sum;
    sf("%d",&cases);
    getchar();
    FOR1(k,1,cases)
    {
        ch=1;
        sf("%lld",&num);
        if(num==1)
        {
            pf("Case %d: 2\n",k);
            continue;
        }
        store=num;
        FOR(i,1,42)
        if(i==log2((F)num))/* if the number is in the base of two */
        {
            pf("Case %d: %lld\n",k,num<<1);
            ch=0;
            break;
        }
        if(ch)
        {
            count=i=0;
            while(store!=0)/* turning the number into binary */
            {
                if(store&1)
                    bin[i++]=1;
                else
                    bin[i++]=0;
                store/=2;
            }
/*          the main logic is if the binary number is 10011 then the next
            combination of the binary number will be 10101.for 10100,will be
            11000. Actually we have to turn the number such that, from where
            we get the next 1 & 0 combination as a condition.
            that's what i'm doing in the next loop.

            input(in binary)     output(in binary)
            ****************     *****************
            10010                10100
            10100                11000
            101                  110
            10                   100
            100                  1000
            11                   101
*/
            FOR(j,0,i)
            {
                if(bin[j]==1)/* how many one's are available before the 1 & 0 condition */
                    count++;
                if(bin[j]==1 && bin[j+1]==0)/* when got the condition 1 & 0 proved,
                                               we break the condition */
                    break;
            }
            bin[j+1]=1;
            FOR1(l,0,j)/* for making the last all the number as zero ( 0 )
                         till the combination approach */
                bin[l]=0;
            FOR(l,0,count-1)/* for making all the number as one 1 from last position */
                bin[l]=1;
            sum=0;
            FOR1(l,0,i)
                sum+=(bin[l]*pow(2,l));/* generate the number into decimal */
            pf("Case %d: %lld\n",k,sum);
            FOR1(l,0,i+1)
                bin[l]=0;
        }
    }
    return 0;
}


