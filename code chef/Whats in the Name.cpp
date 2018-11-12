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

#define mpa make_pair

/*

ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 105
#define sz1 100005

/******   start your code   *******/

char str[sz];
int main()
{
    int i,cnt,j;
    TEST
    {
        queue<int> qq;
        qq.push(0);
        gets(str);
        for(i=1 ; str[i]; i++)
            if(isspace(str[i])) qq.push(i+1);
        if(qq.size()==1)
        {
            pf("%c",toupper(str[0]));
            for(i=1; str[i]; i++) pf("%c",tolower(str[i]));
            nn;
        }
        else
            while(!qq.empty())
            {
                pf("%c. ",toupper(str[ qq.front() ])  );
                //pf("%d",qq.front());
                qq.pop();
                if(qq.size()==1)
                {
                    pf("%c",toupper(str[qq.front()]));
                    for(i=qq.front()+1; str[i]; i++) pf("%c",tolower(str[i]));
                    qq.pop();
                    nn;
                }
            }
    }
    return 0;
}

/*
input:
3
gandhi
mahatma gandhI
Mohndas KaramChand gandhi

output:

*/
