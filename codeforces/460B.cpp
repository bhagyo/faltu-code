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
#define sz 2005
#define sz1 100005

/******   start your code   *******/

int k,l=0;
void findNDigitNumsUtil(int n, int sum, char* out,int index)
{
    if (index > n || sum < 0)
        return;
    if (index == n)
    {
        if(sum == 0)
        {
            l++;
            if(l==k)
            {
                out[index] = '\0';
                cout << out <<endl;
            }
        }
        return;
    }
    for (int i = 0; i <= 9; i++)
    {
        out[index] = i + '0';
        findNDigitNumsUtil(n, sum - i, out, index + 1);
    }
}
void findNDigitNums(int n, int sum)
{
    char out[n + 1];
    for (int i = 1; i <= 9; i++)
    {
        out[0] = i + '0';
        findNDigitNumsUtil(n, sum - i, out, 1);
    }
}
int main()
{
    int sum=10;
    sci(k);
    //k=10000;
    for(int i=2; i<=8; i++)
        findNDigitNums(i, sum);
    return 0;
}
