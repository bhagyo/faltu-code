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

#define sf scanf
#define pf printf

#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);getchar();for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 10005
#define sz1 201

/******   start your code   *******/
int i;
class nodee
{
public:
    set<int> st;
    int dif;
    lld sum;
    nodee()
    {
        dif=sum=0;
    }
    nodee operator +(nodee ob)
    {
        nodee tmp;
        i=0;
        st.insert(ob.st.begin(),ob.st.end());
        tmp.st.insert(st.begin(),st.end());
        tmp.dif=tmp.st.size();
        for(set<int>::iterator it=tmp.st.begin(); i<dif; i++,++it)
        tmp.sum+= *it;
        return tmp;
    }
};
int arr[sz];
nodee tree[4*sz];
nodee khali;
void build(int node,int b,int e)
{
    i=0;
    if(b==e)
    {
        tree[node].st.insert(arr[b]);
        tree[node].dif=1;
        tree[node].sum=arr[b];
        return;
    }
    int lft=node<<1;
    int rgt=lft+1;
    int mid=(b+e)>>1;
    build(lft,b,mid);
    build(rgt,mid+1,e);
    tree[lft].st.insert(tree[rgt].st.begin(),tree[rgt].st.end());
    tree[node].st=tree[lft].st;
    tree[node].dif=tree[node].st.size();
    for(set<int>::iterator it=tree[node].st.begin(); i<tree[node].dif; i++,++it)
        tree[node].sum+=*it;
}
nodee qury(int node,int b,int e,int i,int j)
{
    if(i>e or j<b) return khali;
    if(b>=i and e<=j) return tree[node];
    int lft=node<<1;
    int rgt=lft+1;
    int mid=(b+e)>>1;
    nodee p1=qury(lft,b,mid,i,j);
    nodee p2=qury(rgt,mid+1,e,i,j);
    return p1+p2;
}
int main()
{
    int i,j,r,l,m,n,q;
    TEST
    {
        pf("Case %d:\n",test);
        sci(n);
        for(i=1; i<=n; i++) sci(arr[i]);
        build(1,1,n);
        sci(q);
        while(q--)
        {
            sci2(l,r);
            nodee ext=qury(1,1,n,l,r);
            //pf("see %lld %d\n",ext.sum,ext.dif);
            if(ext.sum==0) pf("0.000000\n");
            else
                pf("%0.6lf\n",double(double(ext.sum)/double(ext.dif)));
        }
        for(i=1;i<sz;i++)
        {
            tree[i].dif=0;
            tree[i].sum=0;
            tree[i].st.clear();
        }
    }
    return 0;
}

/*
2
10
1 2 3 4 4 3 2 1 -1 0
4
1 4
1 10
3 5
8 10
3
1 1 0
1
1 3
Outp
*/

