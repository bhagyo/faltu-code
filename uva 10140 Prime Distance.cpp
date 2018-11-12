/****** HAREE KRISHNA   ******/

//#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<stack>
#include<list>

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

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
#define eps 1e9
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define pb push_back
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 46345
#define sz1 1000000
/******   start your code   *******/

bool status[sz];
int seg_seive[sz1];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k,mx;
    int lo,hi,mn;
    int m,n,o,p;
    bool ck;
    int root=sqrt(sz);
    status[0]=1;
    status[1]=1;
    for(i=4; i<=sz; i+=2) status[i]=1;

    for(i=3; i<=root; i+=2)
        if(status[i]==0)
            for(j=i+i; j<=sz; j+=i)
                status[j]=1;
    while(sf("%d %d",&lo,&hi)==2)
    {
        k=0;
        for(i=lo; i<=hi; i++)
        {
            ck=true;
            root=sqrt(i)+eps;
            for(j=2; j<=root; j++)
                if(status[j]== 0 && i%j==0)
                {
                    //pf("j = %d, i = %d\n",j,i);
                    ck=false;
                    break;
                }
            if(ck){ seg_seive[k++]=i;pf("%d ");}
        }
        m=-1;
        n=100000;
        o=-1;
        p=-1;
        for(i=1; i<k; i++)
        {
            if(seg_seive[i]-seg_seive[i-1]<n-m)
            {
                m=seg_seive[i-1];
                n=seg_seive[i];
            }
            if(seg_seive[i]-seg_seive[i-1]>p-o)
            {
                o=seg_seive[i-1];
                p=seg_seive[i];
            }
        }
        if(o>0)
            printf("%d,%d are closest, %d,%d are most distant.\n",m,n,o,p);
        else
            puts("There are no adjacent primes.");
    }
    return 0;
}







