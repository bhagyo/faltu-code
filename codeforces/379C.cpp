/****** HAREE KRISHNA   ******/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lld;
typedef double lf;
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
#define sz 200005

/******   start your code   *******/

pair<lld,lld> mtyp[sz];
pair<lld,lld> ktyp[sz];

lld khoj(lld hig,lld baki) //upper bound
{
    lld low=0;
    lld paici=-1;
    while(low<=hig)
    {
        lld mid=(low+hig)/2;
        if(ktyp[mid].ff<=baki)
        {
            paici=mid;
            low=mid+1;
        }
        else hig=mid-1;
    }
    return paici;
}

bool comp(pair<lld,lld> a,pair<lld,lld> b)
{
    if(a.ff<b.ff)
        return true;
    if(a.ff==b.ff)
    {
        if(a.ss>b.ss) return true;
        else return false;
    }
    return false;
}

int main()
{
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,x,y,s,z,m,a,b,k,tc,baki,res;

    sf("%lld %lld %lld",&n,&m,&k);
    sf("%lld %lld",&x,&s);

    for(i=0; i<m; i++)
        sf("%lld",&mtyp[i].ss);
    for(i=0; i<m; i++)
        sf("%lld",&mtyp[i].ff);
    sort(mtyp,mtyp+m,comp);

    for(i=0; i<k; i++)
        sf("%lld",&ktyp[i].ss);
    for(i=0; i<k; i++)
        sf("%lld",&ktyp[i].ff);

    res=x*n;

    //pf("res = %lld\n",res);
    for(i=0; i<m; i++)
    {
        if(mtyp[i].ff<=s)
            res=min(res,mtyp[i].ss*n);

        baki=s-mtyp[i].ff; //manapoints
        //pf("baki = %lld\n",baki);
        if(baki<=0) continue;
        lld paici=khoj(k-1,baki); //upper bound
        //pf("paici = %lld\n",paici);
        if(paici==-1) continue;
        lld store=(n-ktyp[paici].ss)*mtyp[i].ss;
        //pf("store = %lld\n",store);
        res=min(res,store);
        //pf("res = %lld\n",res);
        //nn;
    }
    pf("%lld\n",res);
    return 0;
}

/*
input:
20 3 2
10 99
2 4 3
20 10 40
4 15
10 80

output:

*/
