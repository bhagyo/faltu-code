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

char mat[sz][sz];
int main()
{
    int n,m,k,i,j,res,paici;
    sci3(n,m,k);
    res=0;
    for(i=0; i<n; i++) scs(mat[i]);
    if(k==1)
    {
        pfi(n*m);
        return 0;
    }
    if(m>=k) //pasapasi
        for(i=0; i<n; i++)
        {
            paici=0;
            for(j=0; j<m; j++)
            {
                if(mat[i][j]=='.')
                    paici++;
                else
                {
                    if(paici>=k)
                        res+=(paici-k+1);
                    else paici=0;
                }
            }
            if(paici!=0)
            {
                if(paici>=k)
                    res+=(paici-k+1);
                else paici=0;
            }
        }
    if(n>=k) //samne-pichone
        for(i=0; i<m; i++)
        {
            paici=0;
            for(j=0; j<n; j++)
            {
                if(mat[j][i]=='.')
                    paici++;
                else
                {
                    if(paici>=k)
                        res+=(paici-k+1);
                    else paici=0;
                }
            }
            if(paici!=0)
            {
                if(paici>=k)
                    res+=(paici-k+1);
                else paici=0;
            }
        }
    pfi(res);
    return 0;
}

/*
2 2 2
..
..
Outp
*/
