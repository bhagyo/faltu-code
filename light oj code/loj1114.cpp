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
#define sz 100005
#define sz1 201

/******   start your code   *******/

string extra;
int id,tot,ekhn;
char ami[sz];
struct node
{
    int cnt;
    int next[52];
    node()
    {
        cnt=0;
        for (int i=0; i<52; i++)
            next[i]=-1;
    }
} tree[100005];
void _insert(int len)
{
    ekhn=0;
    for (int i=0; i<len; i++)
    {
        if(islower(ami[i])) id=ami[i]-'a';
        else                id=ami[i]-'A'+26;
        if (tree[ekhn].next[id]==-1)
        {
            tree[ekhn].next[id]=++tot;
            tree[tot]=node();
        }
        ekhn=tree[ekhn].next[id];
    }
    tree[ekhn].cnt++;
}
int _search(int len)
{
    ekhn=0;
    for (int i=0; i<len; i++)
    {
        if(islower(extra[i])) id=extra[i]-'a';
        else                  id=extra[i]-'A'+26;
        ekhn=tree[ekhn].next[id];
        if(ekhn==-1) return 0;
    }
    return tree[ekhn].cnt;
}
int main()
{
    //freopen("output.txt","w",stdout);
    int i,n,qq,ans,ln;
    TEST
    {
        tot=0;
        sci(n);
        getchar();
        while(n--)
        {
            scs(ami);
            ln=strlen(ami);
            if(ln>3) sort(ami+1,ami+ln-1);
            _insert(ln);
        }
        sci(qq);
        getchar();
        pf("Case %d:\n",test);
        while(qq--)
        {
            getline(cin,extra);
            //cout<<str<<endl;
            ans=1;
            stringstream ss(extra);
            while(ss>>extra)
            {
                if(extra.size()>3) sort(extra.begin()+1,extra.end()-1);
                ans*=_search(extra.size());
            }
            pfi(ans);
        }
        for(int i=0; i<=tot; i++)
            tree[i]=node();
    }
    return 0;
}

/*
20
8
guide
send
location
liooatcn
download
dlanwood
place
pacle
5
guide be send

2
8
baggers
beggars
in
the
blowed
bowled
barn
bran
1
beggars bowled in the barn
8
baggers
beggars
in
the
blowed
bowled
barn
bran
1
beggars bowled in the barn
*/
