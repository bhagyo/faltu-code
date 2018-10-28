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
ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 2005
#define sz1 201

/******   start your code   *******/


int main()
{
    int i,j,k,store,ca,cb,ta,tb,now,a,b,c;
    TEST
    {
        sci3(a,b,c);
        store=__gcd(a,b);
        if(b>a) swap(a,b);
        //pfs("result = ");
        if(c%store!=0 or a<c)
        {
            pfi(-1);
            continue;
        }
        ca=cb=ta=tb=0;
        while(ta!=c and tb!=c)
        {
            ca++;
            if(ta==0)
            {
                ta=a;
                continue;
            }
            if(tb==b)
            {
                tb=0;
                continue;
            }
            if(ta>(b-tb))
            {
                ta-=(b-tb);
                tb=b;
                //pfi2(ta,tb);
            }
            else
            {
                tb+=ta;
                ta=0;
                //chk1;
            }
            //chk2;
            //pfi2(ta,tb);
        }
        ta=tb=0;
        while(ta!=c and tb!=c)
        {
            cb++;
            if(ta==a){
                ta=0;
                continue;
            }
            if(tb==0)
            {
                tb=b;
                continue;
            }
            if(tb>(a-ta))
            {
                tb-=(a-ta);
                ta=a;
                //pfi2(ta,tb);
            }
            else
            {
                ta+=tb;
                tb=0;
                //chk2;
            }
            //chk3;
            //pfi2(ta,tb);}
        }
        pfi(min(ca,cb));
    }
    return 0;
}

/*
2
5
2
3
2
3
4
Outp
*/
