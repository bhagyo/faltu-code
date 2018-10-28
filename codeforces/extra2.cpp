#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <set>
using namespace std;
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
ll n,k,ans,l;
priority_queue<ll>s;
struct item
{
    ll x,y,pos;
} a[333333];
bool cmp(item a, item b)
{
    return a.x<b.x;
}
int main()
{
    freopen("output.txt","w",stdout);
    cin>>n>>k;
    for(ll i=1; i<=n; i++)
    {
        scanf("%lld%lld",&a[i].x,&a[i].y);
        a[i].pos=i;
    }
    sort(a+1,a+n+1,&cmp);
    for(ll i=1; i<=n; i++)
    {
        printf("%lld %lld %lld\n",a[i].pos,a[i].x, a[i].y);
    }


    for(ll i=1; i<=n; i++)
    {
        if(s.size()<k)
            s.push(-a[i].y);
        else if(-s.top()<a[i].y)
            s.pop(),s.push(-a[i].y);
        if(ans<-s.top()-a[i].x+1&&s.size()==k)
            ans=-s.top()-a[i].x+1,
            l=a[i].x;
    }
    /*if(ans==0)
    {
        for(ll i=1; i<=k; i++)
            printf("%lld ",i);
        return 0;
    }
    for(ll i=1; i<=n&&k; i++)
        if(a[i].x<=l&&l+ans-1<=a[i].y)
            printf("%lld ",a[i].pos),k--;*/
}
