/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি  রাগ,নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef unsigned long long int llu;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define pii pair<int,int>
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);getchar();for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 2005
#define sz1 201

/******   start your code   *******/


int main()
{
    int n,m,x,y,st1,st2;
    TEST
    {
        sci2(n,m);
        sci2(x,y);
        if(n==1 and m==1) pfs("Chefirnemo");
        else if(n==2 and m==2) pfs("Chefirnemo");
        else if(x==1 and y==1) pfs("Chefirnemo");
        else if(x==1 and y!=1)
        {
            st1=m-1;
            if(st1%y==1 and n!=1) pfs("Chefirnemo");
            else pfs("Pofik");
        }
        else if(x!=1 and y==1)
        {
            st1=n-1;
            if(st1%x==1 and m!=1) pfs("Chefirnemo");
            else pfs("Pofik");
        }
        else
        {
            st1=n-1;
            st2=m-1;
            if(st1%x==0 and st2%y==0) pfs("Chefirnemo");
            else if(st1%x==1 and st2%y==1) pfs("Chefirnemo");
            else pfs("Pofik");
        }
    }

    return 0;
}

/*
5
2 2 1 2
11 10 5 9
11 11 5 9
12 11 5 9
1 2 1 100
Outp
*/
