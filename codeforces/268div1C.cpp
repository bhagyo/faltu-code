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
#define sz1 100005

/******   start your code   *******/

int main()
{
    int num,i,j,val;
    sci(num);
    if(num<=3) pfs("NO");
    else
    {
        pfs("YES");
        if(num%2==1)
        {
            pf("5 - 1 = 4\n");
            pf("4 - 2 = 2\n");
            pf("3 * 2 = 6\n");
            pf("4 * 6 = 24\n");
            val=6;
        }
        else
        {
            pf("2 * 1 = 2\n");
            pf("2 * 3 = 6\n");
            pf("4 * 6 = 24\n");
            val=5;
        }
        for(i=val; i<=num; i+=2)
        {
            pf("%d - %d = 1\n",i+1,i);
            pf("24 * 1 = 24\n");
        }
    }
    return 0;
}

/*
input:

output:

*/
