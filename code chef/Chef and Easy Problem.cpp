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
#define sz 32
#define sz1 100005

/******   start your code   *******/

class ban
{
public:
    int o1,z1;
    ban()
    {
        o1=z1=0;
    }
};
ban ar[sz1][sz];
string str;
char str1[sz];
int power(int x, int y)
{
    int temp;
    if(y==0)
        return 1;
    temp=power(x,y/2);
    if (y%2==0)
        return temp*temp;
    else
        return x*temp*temp;
}
int main()
{
    int n,q,i,j,k,l,r,one,zero,num,res;
    for(i=0; i<31; i++)
        ar[0][i].o1=ar[0][i].z1=0;
    sci2(n,q);
    for(i=1; i<=n; i++)
    {
        sci(k);
        str=bitset<31>(k).to_string();
        for(j=0; j<31; j++)
            if(str[j]=='0')
            {
                ar[i][j].z1=ar[i-1][j].z1+1;
                ar[i][j].o1=ar[i-1][j].o1;
            }
            else
            {
                ar[i][j].z1=ar[i-1][j].z1;
                ar[i][j].o1=ar[i-1][j].o1+1;
            }
    }
    while(q--)
    {
        res=0;
        sci2(l,r);
        l--;
        for(i=30,k=0; i>=0; i--,k++)
        {
            zero=ar[r][i].z1-ar[l][i].z1;
            one=ar[r][i].o1-ar[l][i].o1;
            if(zero>one)
                res+=power(2,k);
        }
        pfi(res);
    }
    return 0;
}
/*
input:
5 3
20 11 18 2 13
1 3
3 5
2 4

output:

*/

