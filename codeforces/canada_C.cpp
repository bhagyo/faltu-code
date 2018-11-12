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
#define sz size()

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz2 30
#define sz1 100005

/******   start your code   *******/

char str[sz2];
char ans[3][14];
int main()
{
    bool key;
    C ch1,ch2,ch;
    int i,j,N,x,ln,age,pore,row,res,pos1,pos2,mn;
    //TEST // "test" as variable
    scs(str);
    for (i=0; i<26; i++)
        for(j=i+1; j<=26; j++)
            if(str[i]==str[j])
            {
                if(i+1==j)
                {
                    puts("Impossible") ;
                    return 0;
                }
                else
                    pos1=i,pos2=j;
            }
    age=0,pore=26;
    row=0,ln=0;
    while(age<pos1 or pore>pos2)
    {
        if(pos1-age>pore-pos2)
        {
            //chk1;
            //pf("%c\n",str[age]);
            ans[row][ln]=str[age++];
        }
        else
        {
            //pf("%c\n",str[pore]);
            ans[row][ln]=str[pore--];
        }
        if(row==0) row=1;
        else
        {
            row=0;
            ln++;
        }
    }
//    ans[0][ptt]=ans[1][ptt]='\0';
//    pf("%s\n%s\n",ans[0],ans[1]);
//    pf("\n");
    //pf("age = %d pore = %d ,ln = %d\n",age,pore,ln);

    while(age<pos2)
    {
        ans[row][ln]=str[age++];
        row=1-row;
        ln++;
        if(ln==13) break;
        /*for(i=0; i<2; i++)
        {
            for(j=0; j<ln; j++)
                pf("%c",ans[i][j]);
            pf("\n");
        }*/
    }
    //pfi(ln);
    //chk1;
    ln--;
    while(age<pos2)
    {
        //pfi(age);
        ans[row][ln]=str[age++];
        row=1-row;
        ln--;
    }
    ans[0][13]=ans[1][13]='\0';
    pf("%s\n%s\n",ans[0],ans[1]);
    return 0;
}

/*
input:

output:

*/
