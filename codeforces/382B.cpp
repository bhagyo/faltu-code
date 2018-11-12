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
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

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


/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 2005
#define sz1 100005

/******   start your code   *******/

vector<lf> arr;
int main()
{
    bool key;
    C ch1,ch2;
    //TEST // "test" as variable
    int i,j,lok;
    double k,n,n1,n2,sm1,sm2,see;
    cin>>n>>n1>>n2;
    for(i=0;i<n;i++)
    {
        cin>>see;
        arr.pb(see);
    }

    sort(arr.begin(),arr.end());
    sm1=sm2=0;
    if(n1>n2) swap(n1,n2);
    lok=arr.size();
    for(i=lok-1,j=0;j<n1;j++,i--)
        sm1+=arr[i];
    for(j=0;j<n2;j++,i--)
        sm2+=arr[i];
    pf("%.10lf\n",(sm1/n1)+(sm2/n2));
    return 0;
}

/*
input:

output:

*/
