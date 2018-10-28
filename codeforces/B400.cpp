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
#define sz1 100010

/******   start your code   *******/

bool ispri[sz1];
int arr[sz1];
set<int> st;
void seive()
{
    int i,j;
    ispri[0]=true;
    ispri[1]=true;
    for(i=4; i<=sz1; i+=2) ispri[i]=true;
    int sto=sqrt(sz1)+1;
    for(i=3; i<=sto; i+=2)
        if(!ispri[i])
            for(j=i+i; j<sz1; j+=i)
                ispri[j]=true;
}
int main()
{
    int i,j,k,m,num;
    sci(num);
    seive();
    st.insert(1);
    for(i=2; i<=num+1; i++)
    {
        if(!ispri[i]) arr[i]=1;
        else arr[i]=2;
        st.insert(arr[i]);
    }
    cout<<st.size()<<endl;
    for(i=2; i<=num+1; i++) pf("%d ",arr[i]);
    return 0;
}

/*
input:

output:

*/
