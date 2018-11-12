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
#define sz 27
#define sz1 5

/******   start your code   *******/

int Arr[sz],tot;
char str[sz1];
void ini()
{
    for(int i=0;i<sz;i++) Arr[i]=i;
}
int root(int a)
{
    if(a==Arr[a]) return a;
    return Arr[a]=root(Arr[a]);
}
void uni(int a,int b)
{
    int x=root(a);
    int y=root(b);
    if(x!=y)
    {
        Arr[x]=y;
        tot--;
    }
}
int main()
{

//freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    bool key=false;
    C ch1,ch2;
    int i,j,k,tc;
    scanf("%d\n\n",&tc);
    while(tc--)
    {
        ini();
        cin>>ch1;
        tot=ch1-'A'+1;
        cin.ignore();
        while(1)
        {
            gets(str);
            if(strcmp(str,"")==0) break;
            uni(str[0]-'A',str[1]-'A');
        }
        pfi(tot);
        if(tc) nn;
    }
    return 0;
}

/*
input
1

E
AB
CE
DB
EC

output:

*/
