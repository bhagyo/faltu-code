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
ASCII Value
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 10005
#define sz1 201

/******   start your code   *******/


char mon[][4]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
char month[sz1],start[sz1];
const int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
char wek[][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};

int main()
{
    char day1[sz1];
    int i,j,cnt,lop;
    TEST
    {
        scs(month);scs(start);
        for(i=0;i<12;i++)
            if(strcmp(month,mon[i])==0)
                lop=day[i];

        for(j=0;j<7;j++)
            if(strcmp(start,wek[j])==0) break;
        //pfi2(lop,j);
        cnt=0;
        for(i=0;i<lop;i++)
        {
            if(strcmp("FRI",wek[j])==0) cnt++;
            else if(strcmp("SAT",wek[j])==0) cnt++;
            j++;
            if(j%7==0) j=0;
        }
        pfi(cnt);
    }
    return 0;
}

/*
3
JAN SUN
FEB SUN
OCT THU
Outp
*/
