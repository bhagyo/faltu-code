/****** HAREE KRISHNA   ******/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lld;
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define rg register
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

class data
{
public:
    int val,cnt;
    data()
    {
        val=cnt=0;
    }
};
int main()
{
    bool key;
    C ch1,ch2,ch;
    int i,j,l,r,n,m,a,mark;
    TEST // "test" as variable
    {
        sci(n);
        data arr[n+2];
        for(i=0;i<n;i++) sci(arr[i].val);
        mark=arr[0].val;
        arr[0].cnt++;
        for(i=1;i<n;i++)
        {
            if(arr[i].val==mark)
            {
                arr[i].cnt+=(arr[i-1]+1);
            }
            else
            {

            }
        }
    }

    return 0;
}

/*
input:


output:

*/
