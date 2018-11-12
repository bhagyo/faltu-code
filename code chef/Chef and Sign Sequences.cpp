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
#define sz 100005
#define sz1 100005

/******   start your code   *******/

char str[sz],sr1[sz],tmp;
int main()
{
    int i,j,k,grt,les,res;
    TEST
    {
        j=0;
        while(sf("%c",&tmp) && tmp!='\n')
        {
            if(tmp!='=')
                sr1[j++]=tmp;
        }
        sr1[j]='\0';
        if(j==0) pfi(1);
        else
        {
            tmp=sr1[0];
            grt=les=res=0;
            if(tmp=='>') grt=1;
            else         les=1;
            res=max(grt,max(les,res));
            for(i=1;sr1[i];i++)
            {
                if(tmp==sr1[i] and sr1[i]=='>')
                    grt++;
                else if(tmp==sr1[i] and sr1[i]=='<')
                    les++;
                else
                    grt=les=1;
                res=max(grt,max(les,res));
                tmp=sr1[i];
                //pfi3(grt,les,res);
            }
            pfi(res+1);
        }
    }
    return 0;
}

/*
input:
9
<<<
<><
<=>
<=<
>>>==<<<<>==
>
>
>=>
<=<
output:
5
2
2
3
3
*/
