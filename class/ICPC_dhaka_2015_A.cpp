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
#define pii pair<int,int>
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
ASCII Value
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 10005
#define sz1 201

/******   start your code   *******/


int cnt[12][2];
int dekhi[12];
char res[4];
int main()
{
    int i,j,k,ans,q,d,c;
    TEST
    {
        sci(q);
        for(i=0; i<=9; i++) cnt[i][0]=cnt[i][1]=0;
        for(i=0;i<q;i++)
        {
            sf("%d %d %s",&d,&c,res);
            d--;
            if(c==0 and res[0]=='i')
                cnt[d][0]++;
            else if(c==1 and res[0]=='c')
                cnt[d][1]++;
        }
        ans=0;
        for(i=0;i<10;i++)
            for(j=0;j<i;j++)
                ans+=(cnt[i][1]*cnt[j][0]);
        pf("%d\n",ans);
    }
    return 0;
}

/*
2
4
2  0  i
3  1  c
4  1  c
5  1  i
4
2  0  i
4  1  c
3  0  i
5  1  c
Outp
*/
