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
#define sz 501
#define sz1 501

/******   start your code   *******/

int r,c,i,j;
int aa[sz][sz];
int bb[sz][sz];
int pos(int mid)
{
    mem(bb,-1);
    bb[1][1]=mid;
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
        {
            if(i==1 && j==1) continue;
            if(bb[i-1][j]<=0 && bb[i][j-1]<=0) continue;
            bb[i][j]=aa[i][j]+max(bb[i-1][j],bb[i][j-1]);
        }
    /*for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++) pf("%d ",bb[i][j]);
        nn;
    }*/
    return bb[r][c];
}
int main()
{
    int lo,mid,hi,ans;
    TEST
    {
        sci2(r,c);
        for(i=1;i<=r;i++)
            for(j=1;j<=c;j++) sci(aa[i][j]);
        lo=0,hi=1000000009;
        while(lo<=hi)
        {
            //pfi3(lo,mid,hi);
            mid=(lo+hi)/2;
            if(pos(mid)>=0)
            {
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
            //pfi3(lo,mid,hi);
        }
        //chk1;
        pfi(ans);
    }
    return 0;
}

/*
input:
3
2 3
0 1 -3
1 -2 0
2 2
0 1
2 0
3 4
0 -2 -3 1
-1 4 0 -2
1 -2 -3 0
output:

*/
