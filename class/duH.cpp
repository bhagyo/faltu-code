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
#define sz 55
#define sz1 201

/******   start your code   *******/
struct node
{
    int st,en,indx;
    lld cost;
    node() {}
    node(int _st,int _en,lld _cost,int _indx)
    {
        st=_st;
        en=_en;
        cost=_cost;
        indx=_indx;
    }
};
struct duita
{
    int indx;
    lld cost;
    duita() {}
    duita(int _indx,lld _cost)
    {
        indx=_indx;
        cost=_cost;
    }
};
node arr[100005];
duita arekta[100005];
int n,parent[50005],res[50005];
int parent_size[50005];
void initialize(int N)
{
    for(int i = 0; i<N; i++)
        parent[ i ] = i ,parent_size[i]=1;   /// parent & parent size both are initialize
}
int root (int i)
{
    while(parent[i] != i)            ///  chase parent of current element until it reaches root.
    {
        parent[i] = parent[parent[i]] ;
        i = parent[ i ];
    }
    return i;
}
bool Find(int A,int B)
{
    if( root(A)==root(B) )       ///if A and B have same root,means they are connected.
        return true;
    else
        return false;
}
void weighted_Union(int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(parent_size[root_A] < parent_size[root_B ])
    {
        parent[ root_A ] = parent[root_B];
        parent_size[root_B] += parent_size[root_A];
    }
    else
    {
        parent[ root_B ] = parent[root_A];
        parent_size[root_A] += parent_size[root_B];
    }

}
bool fun(node a,node b)
{
    return a.cost>b.cost;
}
bool fun1(duita a,duita b)
{
    return a.cost<b.cost;
}

int mst(int n)
{
    int cnt=0,tot=0,k=0;
    for(int i=0; i<n; i++)
    {
        int u=arr[i].st;
        int v=arr[i].en;
        if(Find(u,v))
            arekta[k++]=duita(arr[i].indx,arr[i].cost); //age indx,pore cost;
        else
            weighted_Union(u,v);
    }
    sort(arekta,arekta+k,fun1);
    return k;
}
int main()
{
    freopen("oil.in","r",stdin);
    freopen("oil.out","w",stdout);
    int i,j,m,n,aci,jabo,lop;
    lld cost,koto;
    while(sf("%d %d %lld",&n,&m,&cost)!=EOF)
    {
        initialize(n+1);
        for(i=0; i<m; i++)
        {
            sf("%d %d %lld",&aci,&jabo,&koto);
            if(aci>jabo) swap(aci,jabo);
            arr[i]=node(aci,jabo,koto,i+1);
        }
        sort(arr,arr+m,fun);
        /*chk1;
        for(i=0;i<m;i++)
            pf("%d %d %d %lld\n",arr[i].st,arr[i].en,arr[i].indx,arr[i].cost);*/
        lop=mst(m);
        koto=0;
        n=0;
        for(i=0; i<lop; i++)
        {
            if(cost>=koto+arekta[i].cost)
            {
                res[n++]=arekta[i].indx;
                koto+=arekta[i].cost;
            }
            else break;
        }
        pf("%d\n",n);
        for(i=0; i<n; i++)
        {
            if(i==0) pf("%d",res[i]);
            else     pf(" %d",res[i]);
        }
        nn;
    }
    return 0;
}

/*
6 7 10
1 2 3
1 3 3
2 3 3
3 4 1
4 5 5
5 6 4
4 6 5

Outp
*/
