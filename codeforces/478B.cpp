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
typedef pair<int,int> pii;

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
#define sz 18
#define sz1 100005

/******   start your code   *******/

lld ar[sz];
lld faka[sz];
int main()
{
    lld i,j,k,l,st,ace,baki,tmp,res=INT_MIN;
    for(i=0; i<14; i++) sf("%lld",&ar[i]);
    for(k=0; k<14; k++)
        if(ar[k]!=0)
        {
            //chk1;
            tmp=0;
            st=ar[k];
            ar[k]=0;
            ace=st/14;
            baki=st%14;
            for(i=0; i<14; i++)
                faka[i]=ar[i]+ace;
            j=k+1;
            //pf("%lld %lld\n",ace,baki);
            while(baki--)
            {
                j=j%14;
                faka[j++]++;
            }
            for(i=0; i<14; i++)
            {
                //pf("%lld  ",faka[i]);
                if(faka[i]%2==0)
                    tmp+=faka[i];
                faka[i]=0;
            }
            res=max(tmp,res);
            ar[k]=st;
        }
    pf("%lld\n",res);
    return 0;
}
/*
input:
0 0 0 0 0 0 0 0 0 0 15 0 0 0

output:

*/
