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

const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

#define mod 1000000007
#define eps 10e-8
#define sz 500005
#define sz1 100
#define sz2 5
/******* start my code ********/

char str[sz1][sz1];

bool fun(int a,int b)
{
    int x,y,z,w;
    x=y=w=z=0;
    int c,d;
    for(int i=0;i<8;i++)
    {
        c=a+yy[i];
        d=b+xx[i];
        x=y=0;
        while((c>=0 && c<4 && d>=0 && d<4) && (str[c][d]=='x' || str[c][d]=='.'))
        {
            if(str[c][d]=='x')
            x++;
            if(str[c][d]=='.') y++;
            c+=yy[i];
            d+=xx[i];
            if(x==2) return 1;
            if(x==1 && y==1) return 1;
        }
    }
    return 0;
}
int main()
{
    int i,j,k;
    bool key=0;
    for(i=0;i<4;i++)
        scs(str[i]);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(str[i][j]=='x')
                key=fun(i,j);
            if(key)
            {
                pfs("YES\n");
                return 0;
            }
        }
    }
    pfs("NO\n");
    return 0;
}

