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

#define mpr make_pair

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 100005
#define sz1 21

/******   start your code   *******/

map<string,int>mp;
int sze[sz],Arr[sz],ans;
int root(int i)
{
    if(i==Arr[i])
        return i;
    return Arr[i]=root(Arr[i]);
}
int uni(int A,int B)
{
    int r_a=root(A);
    int r_b=root(B);
    if(r_a!=r_b)
    {
        Arr[r_a]=r_b;
        sze[r_b]+=sze[r_a];
    }
    pfi(sze[r_b]);
}
int main()
{
    char nm[sz1],nm2[sz1];
    int i,j,k,c,r;
    TEST
    {
        mp.clear();
        sci(c);
        k=1;
        for(i=0; i<c; i++)
        {
            scs(nm);
            scs(nm2);
            if(mp.find(nm)==mp.end())
            {
                Arr[k]=k;
                sze[k]=1;
                mp[nm]=k++;
            }
            if(mp.find(nm2)==mp.end())
            {
                Arr[k]=k;
                sze[k]=1;
                mp[nm2]=k++;
            }
            uni(mp[nm],mp[nm2]);
        }
    }
    return 0;
}

/*
input:

output:

*/
