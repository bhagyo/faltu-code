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
#define sz 1005
#define sz1 100005

/******   start your code   *******/


map<string,string> mp1,mp2;
string nam[sz],ip[sz];
string nam1,ip2,extra;
int main()
{
    int i,j,k,l,m,n;
    sci2(n,m);
    for(i=0; i<n; i++)
    {
        cin>>nam[i]>>ip[i];
        mp1[ip[i]]=nam[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>nam1>>ip2;
        extra="";
        k=ip2.size();
        for(string::iterator it=ip2.begin();it!=ip2.end();++it)
            if(*it==';') continue;
            else         extra+=(*it);
        cout<<nam1<<" "<<ip2<<" #"<<mp1[extra]<<endl;
    }
    return 0;
}
/*
input:
3 5
google 8.8.8.8
codeforces 212.193.33.27
server 138.197.64.57
redirect 138.197.64.57;
block 8.8.8.8;
cf 212.193.33.27;
unblock 8.8.8.8;
check 138.197.64.57;

output:

*/

