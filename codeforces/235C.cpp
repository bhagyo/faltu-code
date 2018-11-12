/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি রাগ, নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

#define sf scanf
#define pf printf
#define rg register
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

#define mp make_pair

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
    //TEST // "test" as variable
    int i,j,k,one,zero;
    sci2(zero,one);
    if((zero+1)*2<one || zero>(one+1)) pfi(-1);
    else if(zero-1==one || zero==one)
    {
        while(zero>0 || one>0)
        {
            if(zero>0) {pf("0");zero--;}
            if(one>0)  {pf("1");one--;}
        }
    }
    else
    {
        while(zero>0 || one>0)
        {
            if(one>=2 && one-2>=zero)
            {
                pf("11");
                one-=2;
            }
            else if(one>0)
            {
                pf("1");
                one--;
            }
            if(zero>0)
            {
                pf("0");
                zero--;
            }
        }
    }
    //main();

    return 0;
}

/*
input:

output:

*/





















