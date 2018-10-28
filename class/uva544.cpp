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

map<string,int> mp;
int city[205][205];
int main()
{
    bool key;
    C ch1,ch2;
    int i,j,k,r,n,m,cs=1;
    string s1,s2;
    while(sci2(n,r) and (n!=0 and r!=0))
    {
        k=0;
        for(i=0; i<r; i++)
        {
            cin>>s1>>s2>>m;
            if(mp[s1]==0) mp[s1]=++k;
            if(mp[s2]==0) mp[s2]=++k;
            city[mp[s1]][mp[s2]]=m;
            city[mp[s2]][mp[s1]]=m;
        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    city[j][i]=city[i][j]=max(city[i][j],min(city[i][k],city[k][j]));
        cin>>s1>>s2;
        pf("Scenario #%d\n",cs++);
        pf("%d tons\n",city[mp[s1]][mp[s2]]);
        nn;
        mp.clear();
        mem(city,0);
    }

    return 0;
}

/*
input:
4 3
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Muenchen
5 5
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Hamburg 220
Hamburg Muenchen 170
Muenchen Karlsruhe
output:

*/
