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
#define sz 100005
#define sz1 201

/******   start your code   *******/

char str[sz1];
bool paici[sz];
set<char> st1,st2;
int main()
{
    int i,j,k,m,n;
    sci(n);
    scs(str);
    mem(paici,false);
    for(i=0; str[i]; i++)
    {
        if(islower(str[i]))
        {
            if(!paici[str[i]])
            {
                //chk1;
                //pfi(i+1);
                st1.insert(i+1);
            }
            paici[str[i]]=true;
        }
        else
        {
            //chk2;
            //pfi2(i+1,st1.size(),st2.size());
            mem(paici,false);
            if(st1.size()>st2.size())
                st2=st1;
            st1.clear();
        }
    }
    if(st1.size()>st2.size())
        st2=st1;
    pfi(st2.size());
    return 0;
}

/*
input:
11
aaaaBaabAbA
output:

*/
