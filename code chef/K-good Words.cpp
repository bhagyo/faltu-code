#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include<queue>
#include<vector>
#include<algorithm>
#include<bitset>
#include<algorithm>
#include<set>
#include<limits.h>

using namespace std;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;


/*----------simple input section ------------ */
#define sf scanf
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfi2(x,y) scanf("%d%d",&x,&y)
#define sfl(x) scanf("%ld",&x)
#define sfll(x) scanf("%lld",&x)
#define sfd(x) scanf("%lf",&x)
#define sfu(x) scanf("%llu",&x)
#define sfs(x) scanf("%s",x)


/*----------simple input section ------------ */
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%ld\n",x)
#define pfll(x) printf("%lld\n",x)
#define pfu(x) printf("%llu\n",x)
#define pfs(x) printf("%s\n",x)
#define pfc(x) printf("%c\n",x)

/*----------file input section ------------ */

#define f_input  freopen("input.txt","r",stdin);
#define f_output freopen("output.txt","w",stdout);

#define pb(x) push_back(x)
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define mem(x,y) memset(x,y,sizeof(x))
#define TEST int cs,T;sfi(T);getchar();for(cs=1;cs<=T;cs++)
#define nn printf("\n")
// xx-> diagonal -> 8 horizontal/vertical->4

const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};


/******** debug **********/
#define chk1 printf("hi......1  \n")
#define chk2 printf("hi......2  \n")




#define mod 1000003
#define eps 10e-8
#define sz 55
#define sz1 207
#define sz2 100005
/******* start my code ********/
char str[sz2];
int arr[sz1];
int main()
{
    int i,j,k,x,ans,l,n,mn,t,mx,m,sum,u,e,w,h,a,b,c,y,mid;
    char ch,ch1;
    bool key=1,flag=1;
    TEST
    {
        sfs(str);
        sfi(k);
        mx=INT_MIN;
        mn=INT_MAX;
        x=0;
        for(i=0; str[i]; i++)
        {
            y=str[i];
            arr[y]++;
            mx=max(mx,arr[y]);
        }
        for(i='a'; i<='z'; i++)
        {
            if(arr[i]>0)
            {
                mn=min(mn,arr[i]);

            }
        }
        ans=0;
        // pf("mx=%d mn=%d k=%d\n",mx,mn,k);
        if((mx-mn)>k)
        {
            //chk1;
            for(i='a'; i<='z'; i++)
            {
                if(arr[i]-mn>k)
                {
                    // pf("%c %d\n",i,arr[i]-mn);
                    ans+=(arr[i]-mn-k);
                }

            }
        }
        else if((mx-mn)<k)
        {
            //chk2;
            if(mx-mn==0)
                ans=0;
            else
            {
                ans=INT_MAX;
                for(i='a'; i<='z'; i++)
                {
                    if(arr[i]!=mx && arr[i]>0 && mx-arr[i]<k && (k-(mx-arr[i]))<=arr[i])
                    {
                        // pf("%c %d\n",i,arr[i]-mn);
                        ans=min(ans,k-(mx-arr[i]));
                    }

                }
            }
        }
        pfi(ans);
        mem(arr,0);
    }
    return 0;
}
