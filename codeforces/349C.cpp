/****** HAREE KRISHNA   ******/

//#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<stack>
#include<list>
#include<climits>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef float f;
typedef double lf;
typedef unsigned int u;
typedef unsigned long int lu;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define rep(i,x,cases) for(i=x;i<cases;i++)
#define repin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scl(x) scanf("%ld",&x)
#define scl2(x,y) scanf("%ld %ld",&x,&y)
#define scl3(x,y,z) scanf("%ld %ld %ld",&x,&y,&z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 10005

/******   start your code   *******/

set<string> st;
string str;
int arr[sz];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    int i,j,n,m,a,b,k,tc,cnt,res,ans,total,temp,num1,num2,store,num;
    //TEST // "test" as variable
    //while(1)
    {
        cin>>str;
        temp=str.length();
        pf("temp = %d\n",temp);
        arr[temp]=5;
        for(i=temp-2; i>4; i--)
        {
            pf("arr[%d] = %d\n",i,arr[i]);
            if(arr[i+2]!=0)
            {
                chk1;
                if(arr[i+2]!=0 or str.substr(i,2)!=str.substr(i+2,2))
                {
                    chk3;
                    st.insert(str.substr(i,2));
                    cout<<str.substr(i,2)<<"  "<<i<<endl;
                    //pf("show = %s\n",str.substr(i,2));
                    arr[i]+=2;
                }
                //pf("arr[%d] = %d\n",i,arr[i]);
            }

            if(arr[i+3]!=0)
            {
                chk2;
                if(arr[i+2]!=0 or str.substr(i,3)!=str.substr(i+3,3))
                {
                    chk3;
                    st.insert(str.substr(i,3));
                    cout<<str.substr(i,3)<<"  "<<i<<endl;
                    //pf("show = %s\n",str.substr(i,3));
                    arr[i]+=3;
                }
                //pf("arr[%d] = %d\n",i,arr[i]);
            }
        }
        //cout<<st.end()<<endl;
        pf("%d\n",st.size());
        for(set <string>::iterator it=st.begin(); it!=st.end(); it++)
            cout<<*it<<endl;

    }
    return 0;
}

/*
input:

abacabaca
abcdeabzzzzzzzz
abcdexyzzzz

output:

5
ab
abz
bz
zz
zzz

5
xyz
yz
yzz
zz
zzz
*/
