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
#define sz 100005
#define sz1 10

/******   start your code   *******/

priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > boro;
priority_queue<pair<int, int> > choto;
int asol(int b)
{
    if(b<0) return -b;
    else return b;
}
int main()
{
    int n,i,tx,dis,res,d;
    TEST
    {
        res=0;
        sci2(n,dis);
        for(i=1; i<=n; i++)
        {
            sci(d);
            choto.push(make_pair(d,i));
            boro.push(make_pair(d,i));
            while(!boro.empty() and(i-boro.top().ss)>=dis)
            {
                //pf("boro = %d\n",boro.top().ff);
                boro.pop();
            }
            while(!choto.empty() and(i-choto.top().ss)>=dis)
            {
                //pf("choto = %d\n",choto.top().ff);
                choto.pop();
            }
            if(boro.size()>1 and choto.size()>1)
            {
                res=max(res,asol(boro.top().ff-choto.top().ff));
                //pfi2(boro.top().ff,choto.top().ff);
            }
        }
        while(!boro.empty()) boro.pop();
        while(!choto.empty()) choto.pop();
        pf("Case %d: %d\n",test,res);
    }
    return 0;
}

/*
input:
3
6 2
6 0 8 8 8 4
8 3
19 8 4 13 12 1 0 13
2 2
1 1

output:

*/
