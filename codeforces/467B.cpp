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
#define sz 31630
#define sz1 100005

/******   start your code   *******/

int j,ar[sz];
int primeFactors(int n)
{
    j=0;
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        n=n/2;
        ar[j++]=2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
        while (n%i == 0)
        {
            //printf("%d ", i);
            ar[j++]=i;
            n = n/i;
        }
    if (n > 2)
    {
        //printf ("%d ", n);
        ar[j++]=n;
    }
    return j;
}
int main()
{
    int i,k,l,p,y,val;
    sci2(p,y);
    for(i=y;i>p;i--)
    {
        //chk1;
        val=primeFactors(i);
        //pfi(val);
        sort(ar,ar+val);
        //for(k=0;k<val;k++) pf("%d ",ar[k]);
        //nn;nn;
        if(ar[0]>p)
        {
            pfi(i);
            return 0;
        }
        mem(ar,0);
    }
    pfi(-1);
    return 0;
}
/*
input:


output:

*/

