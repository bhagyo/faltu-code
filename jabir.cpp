#include<bits/stdc++.h>
using namespace std;
int arr[100010];

long long pr[101];

int main()
{
    int n;
    cin>>n;
    int i,j;

    pr[0]=1;

    for(i=1; i<=30; i++)
        pr[i]=pr[i-1]*2;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    sort(arr,arr+n);

    long long ans=0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<=4; j++)
        {
            if(pr[j]-arr[i]<1)
                continue;
            int cnt = upper_bound(arr+i+1,arr+n,pr[j]-arr[i])-arr;
            int cnt2 = lower_bound(arr+i+1,arr+n,pr[j]-arr[i])-arr;

            ans+=(cnt-cnt2);
            printf("cnt  = %d  cnt2 = %d\n",cnt,cnt2);

        }
        printf("ans = %lld\n",ans);

    }

    cout<<ans;


}
