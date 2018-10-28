/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

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
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORc(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 10000

/******   start your code   *******/

int main()
{
    int i,j,k,cases,num,temp,store,val;
    C ck;
    int arr[size];
    LLD sum;
    while(sf("%d",&num)==1)
    {
        if(num==0 || num==1)
        {
            pf("1\n");
            continue;
        }
        temp=val=sum=0;
        store=num;
        while(num!=0)//store the number in array index
        {
            arr[val++]=num%10;
            num/=10;
        }
        num=store;// assign the number in num
        for(i=2; i<num; i++)// we don't multiply the number with its's own
        {
            for(j=0; j<val; j++)
            {
                store=arr[j]*i+temp;
                arr[j]=store%10;
                temp=store/10;
            }
            while(temp!=0)//if the value of temp is greater than 0
            {
                arr[val++]=temp%10;
                temp/=10;
            }
        }
        for(j=val-1; j>=0; j--)
            sum+=arr[j];
        pf("%lld\n",sum);
    }
    return 0;
}


