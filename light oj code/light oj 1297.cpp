/****** HAREE KRISHNA   ******/

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
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 5
#define sz 100005

/******   start your code   *******/
lf area(lf ln,lf wd,lf rot)
{
    return (ln-2*rot)*(wd-2*rot)*rot;
}

int main()
{
    bool key;
    C ch1,ch2,ch;
    lf len,wid;
    TEST // "test" as variable
    {
        sf("%lf %lf",&len,&wid);
        lf sto=len+wid;
        lf root1=(4*sto+sqrt(16*sto*sto-48*len*wid))/24.00;
        lf root2=(4*sto-sqrt(16*sto*sto-48*len*wid))/24.00;
        lf res=INT_MIN;
        if(root1>0)
            res=max(res,area(len,wid,root1));
        if(root2>0)
            res=max(res,area(len,wid,root2));
        pf("Case %d: %0.8lf\n",test,res);
    }

    return 0;
}

/*
input:


output:

*/
