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

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 101
#define sz1 100005

/******   start your code   *******/

int coin[sz];
int sum[sz];
int lower(int tot,int n)
{
    chk2;
    int lo=0,hi=n-1,mid;
    while(lo<=hi)
    {
        mid=(lo+hi)>>1;
        pfi3(lo,mid,hi);
        if(sum[mid]>=tot)
            hi=mid-1;
        else lo=mid+1;
        pfi3(lo,mid,hi);
    }
    return mid;

}
int upper(int tot,int n)
{
    chk3;
    int lo=0,hi=n-1,mid;
    while(lo<=hi)
    {
        mid=(lo+hi)>>1;
        pfi3(lo,mid,hi);
        if(sum[mid]<=tot)
            lo=mid+1;
        else hi=mid-1;
        pfi3(lo,mid,hi);
    }
    return mid;

}
int main()
{
    TEST
    {
        int m,tot=0,top_l,top_r;
        sci(m);
        for(int i=0; i<m; i++)
        {
            sci(coin[i]);
            tot+=coin[i];
            if(i==0) sum[i]=coin[i];
            else     sum[i]=coin[i]+sum[i-1];
        }
        //top_l=lower((tot+1)/2,m);
        //top_r=upper((tot+1)/2,m);
        //chk1;
        //pfi((tot+1)/2);
        if(m==1) pfi(coin[0]);
        else if(m==2) pfi(sum[1]-sum[0]);
        else
        {
            for(int i=0; i<m; i++)
                if(sum[i]<=tot/2) top_l=i;

            for(int i=0; i<m; i++)
                if(sum[i]>=tot/2)
                {
                    top_r=i;
                    break;
                }
            //chk2;
            //pfi2(top_l,top_r);
            int st1=sum[m-1]-sum[top_l];
            st1=abs(st1-sum[top_l]);

            int st2=sum[m-1]-sum[top_r];
            st2=abs(st1-sum[top_r]);

            pfi(min(st1,st2));
        }

    }
    return 0;
}

/*
input:

output:

*/
