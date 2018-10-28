/****** HAREE KRISHNA   ******/

#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<limits>
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
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define sz 101

/******   start your code   *******/

int row,col;
int temp[sz];
int arr[sz][sz];
int kandane(int temp[],int row)
{
    int cur_sum,new_max=INT_MIN,i;
    cur_sum=0;
    bool ck=false;
    for(i=0;i<row;i++)
    {
        cur_sum+=temp[i];
        if(cur_sum<0) cur_sum=0;
        else if(cur_sum>new_max)
            new_max=cur_sum,ck=true;
    }
    if(ck)
        return new_max;
    new_max=temp[0];
    for(i=1;i<row;i++)
        if(temp[i]>new_max)
            new_max=temp[i];
    return new_max;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k,tc,res;
    int max_sum,cur,sum;
    int left,right;
    C ch;
    while(sf("%d",&row)==1)
    {
        max_sum=INT_MIN;
        col=row;
        for(i=0;i<col;i++)
            for(j=0;j<row;j++)
                sf("%d",&arr[i][j]);
        for(left=0;left<col;left++)
        {
            memset(temp,0,sizeof(temp));
            for(right=left;right<col;right++)
            {
                for(i=0;i<row;i++)
                    temp[i]+=arr[i][right];
                sum=kandane(temp,row);
                if(sum>max_sum) max_sum=sum;
            }
        }
        pf("res = %d\n",max_sum);
    }
    return 0;
}














