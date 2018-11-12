/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি রাগ, নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
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

typedef long long int lld;
typedef double lf;
typedef unsigned long long int llu;
typedef char C;

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

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz1 2005
#define sz 100005

/******   start your code   *******/

map<char,int> mp;
queue <char> qu;
char arr[sz];
int main()
{
    string str;
    bool key;
    C ch1,ch2,ch;
    int i,n,x,y,m,a,b,k,res,pos,mn;
    key=false;
    cin>>str;
    int len=str.size();
    if(len<26){pfi(-1);return 0;}

    k=m=n=0;
    for(i=0;i<len;i++)
    {
        if(str[i]=='?')
            k++;
        else if(!mp[str[i]])
        {
            mp[str[i]]=1;
            n++;
        }
        else mp[str[i]]++;
        qu.push(str[i]);
        //pfi2(n,k);
        if(qu.size()==26)
        {
            if(n+k<26)
            {
                if(qu.front()=='?')
                    k--;
                else
                {
                    mp[qu.front()]--;
                    if(mp[qu.front()]==0)
                        n--;
                }
                qu.pop();
            }
            else if(n+k==26)
            {
                y=i;
                //chk1;
                //pfi(y);
                key=true;
                break;
            }
            //pf("c = %d %d\n",n,k);
        }
    }
    if(!key) pfi(-1);
    else
    {
        k=0;
        x=y-25;
        for(char j='A';j<='Z';j++){
            if(!mp[j])
                arr[k++]=j;
        }
        //arr[k]='\0';
        //chk2;
        //pfs(arr);
        //cout<<str<<endl;
        for(i=x,k=0;i<=y;i++)
            if(str[i]=='?')
                str[i]=arr[k++];
        //chk3;
        for(i=0;i<x;i++)
            if(str[i]=='?')
                str[i]='Z';
        for(i=y+1;i<len;i++)
            if(str[i]=='?')
                str[i]='Z';
        cout<<str<<endl;
    }

    return 0;
}

/*
input:
???????????????????????????

ABCDEFGHIJKLMNOPQRSTUVWXYZ
AAAAAAAAAAAAAAAAAAAAAAAAAA

ABCDEFGHIJKLMNOPQRSTUVWZYZ

ABCDEFGHIJKLMNOPQRSTUVWZYZ

output:

*/
