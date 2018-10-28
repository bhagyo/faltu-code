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


#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci(x) scanf("%d",&x)

#define pfi(x) printf("%d\n",x)

int main()
{
    int i,j,n,x,y,z,m,a,b,k,tc,cnt,res;
    sci2(m,n);
    for(i=1;;i++)
    {
        cnt=m*i;
        if(cnt%10==n or cnt%10==0)
            break;
    }
    pfi(i);
    return 0;
}

/*
input:


output:

*/
