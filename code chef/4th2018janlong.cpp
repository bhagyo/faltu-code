#include<bits/stdc++.h>
using namespace std;
int ar[1000005];
int last;
long long val,tot,baki1,n,x;
int main()
{
    int i,j,test;
    cin>>test;
    while(test--)
    {
        cin>>x>>n;
        //cout<<x<<" "<<n<<endl;
        tot=n*(n+1);
        tot/=2;
        tot-=x;
        ar[x]=2;
        if((tot&1) or n<=3) cout<<"impossible"<<endl;
        else
        {
            tot/=2;
            for(i=n; i>=1; i--)
            {
                if(ar[i]==2) continue;
                if(tot==0)   break;
                if(tot>=i)
                {
                    tot-=i;
                    ar[i]=1;
                    last=i;
                }
            }
            if(tot>0)
            {

            }
            else
            {
                for(i=1; i<=n; i++) cout<<ar[i];
                cout<<endl;
            }
            memset(ar,0,sizeof(ar));
        }
    }
    return 0;
}
/*
3
2 4
5 5
1 2
*/
