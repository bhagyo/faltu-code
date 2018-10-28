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

lld solve(lld sto,lld n,lld c)
{
    //pf("func == %lld\n",sto*(c-n*sto));
    return sto*(c-n*sto);

}
int main()
{
    bool key;
    C ch1,ch2,ch;
    lld i,j,k,n,c;
    TEST // "test" as variable
    {
        sf("%lld %lld",&n,&c);
        if(n==0)
        {
            pf("Case %d: 0\n",test);
            continue;
        }
        lld sto1=(c/(2*n));
        lld sto2=(c/(2*n))+1;
        //pf("%lld %lld \n",sto1,sto2);
        pf("Case %d: %lld\n",test,solve(sto1,n,c)>=solve(sto2,n,c)?sto1:sto2);
    }
    return 0;
}
/*
6
1 0
0 1
4 3
2 8
3 27
25 1000000000
*/
