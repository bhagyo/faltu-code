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
#include<climits>

using namespace std;

typedef long long int lld;
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 1005
#define sz 10

/******   start your code   *******/

int Arr[sz];
int sze[sz];
void initialize( int N)
{
    for(int i = 0; i<N; i++)
        Arr[ i ] = i,sze[i]=1 ;
}

/*int root(int i)
{
    pfi2(Arr[i],i);
    int TEMP = Arr[ A ];
    for(int i = 0; i < N; i++)
    {
        if(Arr[ i ] == TEMP)
            Arr[ i ] = Arr[ B ];
    }
}*/
int uni(int A,int B)
{
    int TEMP = Arr[ A ];
    for(int i = 0; i < 10; i++)
        if(Arr[ i ] == TEMP){
            pfi3(i,Arr[i],Arr[B]);
            Arr[ i ] = Arr[ B ];
        }
}
bool fin(int A,int B)
{
    if(Arr[ A ] == Arr[ B ])
        return true;
    else
        return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,res,total,num1,num2,store,num;
    //TEST // "test" as variable
    //while(1)
    initialize(10);
    for(i=0; i<10; i++)
        pf("%d  ",i);
    nn;
    for(i=0; i<10; i++)
        pf("%d  ",Arr[i]);
    nn;
    for(j=0; j<6; j++)
    {
        sci2(m,n);
        uni(m,n);
        for(i=0; i<10; i++)
            pf("%d  ",i);
        nn;
        for(i=0; i<10; i++)
            pf("%d  ",Arr[i]);
        nn;
    }
    return 0;
}

/*
input:

output:

*/