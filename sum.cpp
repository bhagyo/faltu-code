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
#define sz 10005
#define sz1 201

/******   start your code   *******/

int indx;
struct node
{
    int cnt;
    int next[53];
    node()
    {
        cnt=0;
        for (int i=0; i<=52; i++)
            next[i]=-1;
    }
} tree[120005];
void _insert(string s)
{
    int ekhn=0;
    int lop=s.size();
    for (int i=0; i<lop; i++)
    {
        int id;
        if(islower(s[i])) id=s[i]-'a';
        else              id=s[i]-'A'+26;
        if (tree[ekhn].next[id]==-1)
        {
            tree[ekhn].next[id]=++indx;
            tree[indx]=node();
        }
        ekhn=tree[ekhn].next[id];
    }
    tree[ekhn].cnt++;
}
int _search(string s)
{
    int ekhn=0;
    int lop=s.size();
    for (int i=0; i<lop; i++)
    {
        int id;
        if(islower(s[i])) id=s[i]-'a';
        else              id=s[i]-'A'+26;
        ekhn=tree[ekhn].next[id];
        if(ekhn==-1) return 0;
    }
    return tree[ekhn].cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    //freopen("output.txt","w",stdout);
    int i,n,qq,ans;
    string str;
    TEST
    {
        indx=0;
        sci(n);
        while(n--)
        {
            cin>>str;
            if(str.size()>3) sort(str.begin()+1,str.end()-1);
            _insert(str);
        }
        sci(qq);
        cin.ignore();
        pf("Case %d:\n",test);
        while(qq--)
        {
            getline(cin,str);
            ans=1;
            stringstream ss(str);
            while(ss>>str)
            {
                if(str.size()>3) sort(str.begin()+1,str.end()-1);
                ans*=_search(str);
            }
            pfi(ans);
        }
        for(int i=0; i<=indx; i++)
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
