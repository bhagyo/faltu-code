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
#define pii pair<int,int>
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
#define sz 1000005
#define sz1 10

/******   start your code   *******/

bool prim[sz];
void siv()
{
    int i,j;
    int sqt=sqrt(sz);
    for(i=4;i<=sz;i+=2) prim[i]=true;
    for(i=3;i<=sqt;i+=2)
        if(!prim[i])
            for(j=i+i;j<=sz;j+=i)
                prim[j]=true;
}
lld cnt(lld num)
{
    lld tot=num,i,j,ekhn,sqt;
    sqt=sqrt(num);
    //pf("sqt = %lld,%lld\n",sqt,num);
    for(i=2;i<=sqt;i++)
        if(!prim[i])
        {
            ekhn=i;
            for(j=3;j<=sz;j++)
            {
                ekhn=ekhn*i;
                //pf("ekhn = %lld,%lld\n",ekhn,j);
                if(ekhn>num) break;
                if(!prim[j]) tot--;
            }
        }
    //pf("tot = %lld\n",tot);
    //nn;nn;
    return tot;
}
int main()
{
    siv();
    lld l,r,i,j,ans;
    sf("%lld %lld",&l,&r);
    pf("%lld\n",cnt(r)-cnt(l-1));
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
