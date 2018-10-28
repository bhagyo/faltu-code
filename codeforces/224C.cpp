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

#define mpa make_pair

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

set<int> st;
int arr[sz];
int paici[sz];
vector<int> vec;
int main()
{
    int n,i,j,dif,tot,val,eita;
    sci(n);
    for(i=0; i<n; i++) sci(arr[i]);
    sort(arr,arr+n);
    if(n==1){ pfi(-1);return 0;}
    else if(n==2)
    {
        st.insert(2*arr[0]-arr[1]);
        st.insert(2*arr[1]-arr[0]);
        if((arr[0]+arr[1])%2==0) st.insert((arr[1]+arr[0])/2);
    }
    else
    {
        for(i=1; i<n; i++)
        {
            int dif=arr[i]-arr[i-1];
            if(paici[dif]==0)
                vec.push_back(dif);
            paici[dif]++;
            if(vec.size()==3)
            {
                pfi(0);
                return 0;
            }
        }
        if(vec.size()==1)
        {
            st.insert(arr[0]-vec[0]);
            st.insert(arr[n-1]+vec[0]);
        }
        else
        {
            tot=max(vec[0],vec[1]);
            for(i=1; i<n; i++)
                if(arr[i]-arr[i-1]==tot)
                {
                    val=arr[i-1]+min(vec[0],vec[1]);
                    if(val-arr[i-1]!=arr[i]-val)
                    {
                        pfi(0);
                        return 0;
                    }
                    else st.insert(val);
                    if(st.size()==2)
                    {
                        pfi(0);
                        return 0;
                    }
                }
        }
    }
    pfi(st.size());
    for(set<int>::iterator it=st.begin();it!=st.end();++it)
        cout<<*it<<" ";
    return 0;
}

/*
input:

output:

*/
