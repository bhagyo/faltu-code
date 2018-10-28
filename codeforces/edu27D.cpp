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
#define sz 1000005
#define sz1 10

/******   start your code   *******/

int ar1[sz];
int ar2[sz];
int main()
{
    int i,j,k,n,val,cnt,ekhn,typ;
    int age1,age2;
    age1=age2=0;
    sci(n);
    cnt=0;
    ar1[0]=301;
    ar2[0]=1;
    while(n--)
    {
        sci(typ);
        if(typ==1)
        {
            sci(val);
            for(;val>ar1[age1];age1--)
                cnt++;
            ekhn=val;
        }
        else if(typ==2)
        {
            for(;!ar2[age2];age2--)
                cnt++;
        }
        else if(typ==3)
        {
            sci(val);
            if(val<ekhn)
                cnt++;
            else ar1[++age1]=val;
        }
        else if(typ==4)
            ar2[++age2]=1;
        else if(typ==5)
            ar1[++age1]=301;
        else ar2[++age2]=0;
    }
    pfi(cnt);
    return 0;
}

/*
input:
11
1 100
3 70
4
2
3 120
5
3 120
6
1 150
4
3 300

5
1 100
3 200
2
4
5

7
1 20
2
6
4
6
6
2

output:

*/
