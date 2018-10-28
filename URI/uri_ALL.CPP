/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef float f;
typedef double lf;
typedef unsigned int u;
typedef unsigned long int lu;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 10000
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

/******   start your code   *******/

int see[5],see1[5];
void rev_string(C str1[])/*reversing string*/
{
    C temp;
    int i=0,j=4;
    while(i<j/2)
    {
        temp=str1[i];
        str1[i]=str1[j-i-1];
        str1[j-i-1]=temp;
        i++;
    }
}

void bubble_sort(C str1[])/*arrange digits in ascending order*/
{
    int i,j;
    C temp;
    for(i=0; i<4-1; i++)
        for(j=i+1; j<4; j++)
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
}

C func_high(int num)
{
    int j,k,i=0;
    while(num)
    {
        see[i++]=num%10;
        num/=10;
    }
    see[i]='\0';
    buble_sort(see);
}
int func_low(int low)
{

}

int main()
{
    int i,j,k,num,cases=1,low,high;
    sf("%d",&cases);
    getchar();
    for(k=1;k<=cases;k++)
    {
        sf("%d",&num);
        if(num==0)
        {
            pf("Caso #%d: -1\n",k);
            continue;
        }
        for(i=1;;i++)
        {
            while(num<1000)
                num*=10;
            num=func_high(num)-func_low(num);
            if(num==6174)
                break;
        }
        pf("Caso #1: %d\n",k,i);
    }
    return 0;
}










