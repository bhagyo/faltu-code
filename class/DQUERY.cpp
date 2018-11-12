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
#define sz 1000005
#define sz1 1000005

/******   start your code   *******/
int block=224;
class build
{
public:
    int lft,rgt,ind;
    build()
    {
        lft=rgt=ind=0;
    }
};
build qury[50001];
int arr[50001];
int ans[50001];
int cnt[2];
bool cmp(build a,build b)
{
    if(a.lft/block==b.lft/block)
        return a.rgt<b.rgt;
    return a.lft<b.lft;
}
void add_ele(int val)
{
    if(val==1) cnt[0]++;
    else cnt[1]++;
}
void rem_ele(int val)
{
    if(val==1) cnt[0]--;
    else cnt[1]--;
}
int main()
{
    int i,n,q,left,rigt;
    sci2(n,q);
    for(i=1; i<=n; i++) sci(arr[i]);
    for(i=0; i<q; i++)
    {
        sci2(qury[i].lft,qury[i].rgt);
        qury[i].ind=i;
    }
    sort(qury,qury+q,cmp);
    int cl,cr;
    cl=cr=1;
    for(i=0; i<q; i++)
    {
        left=qury[i].lft;
        rigt=qury[i].rgt;
        while(cl<left)
        {
            rem_ele(cl);
            cl++;
        }
        while(cl>left)
        {
            cl--;
            add_ele(cl);
        }
        while(cr<=rigt)
        {
            add_ele(cr);
            cr++;
        }
        while(cr>rigt+1)
        {
            cr--;
            rem_ele(cr-1);
        }
        ans[qury[i].ind]=min(cnt[0],cnt[1])*2;
    }
    for(i=0; i<q; i++) pfi(ans[i]);
    return 0;
}
/*
5
1 1 2 1 3
3
1 5
2 4
3 5
*/
