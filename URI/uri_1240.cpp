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
#define sz 2005
#define sz1 100005

/******   start your code   *******/

int main()
{

    bool key;
    int i,j;
    string st1,st2;
    TEST
    {
        cin>>st1>>st2;
        int ln1=st1.size();
        int ln2=st2.size();
        if(ln2>ln1) pfs("nao encaixa");
        else
        {
            key=true;
            for(i=ln1-1,j=ln2-1; i>=ln1-ln2; i--,j--)
            {
                //pf("i = %d,j = %d\n",i,j);
                if(st1[i]!=st2[j])
                {
                    pfs("nao encaixa");
                    key=false;
                    break;
                }
            }
            if(key) pfs("encaixa");
        }
    }

    return 0;
}

/*
input:
4
5678690 78690
5434554 543
1243 1243
54 654
output:

*/
