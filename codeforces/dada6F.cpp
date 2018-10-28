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
#define sz 4000005
#define sz1 201

/******   start your code   *******/


int store[sz];
char str[sz];
int main()
{
    int i,j,k,len,m,res,now,xx;
    scs(str);
    while(strcmp(str,"End")!=0)
    {
        len=strlen(str);
        now=0;
        store[0]=0;
        i=1;
        /*xx=1;
        for(k=1;k<len;k++)
        {
            if(str[k]==str[0])
                xx+=1;
            else
                break;
        }*/
        while(i<len)
        {
            /*if(str[i]==str[0] and str[i]==str[i-1] and store[i-1]== xx)
            {
                store[i]=xx;
                //chk1;
                i++;
            }
            else if(store[i-1]==xx and str[xx]==str[i])
            {
                store[i]=xx+1;
                i++;
            }*/
            if(str[i]==str[now])
            {
                now++;
                store[i]=now;
                i++;
                //chk3;
            }
            else
            {
                if(now!=0)
                {
                    now=store[now-1];
                    //chk1;
                }
                else
                {
                    store[i]=0;
                    i++;
                    //chk2;
                }
            }
        }
        pf("%d",store[0]);
        for(i=1; i<len; i++)
        {
            pf(" %d",store[i]);
            store[i]=0;
        }
        nn;
        scs(str);
    }
    return 0;
}

/*
oebmgoca
bdblhc
jgojeqp
atofpgrwk
fdcdd
ababbacdbacdbacd
dacc
cbda
accb
dcbb
dacbbcbcbcbcdcbbbcbcbcbcbcbcdacbbcbcdcbbbcbcdcbbdcbb
aaaabaaaaaac
aaaabaaaaaab
End
Outp
*/
