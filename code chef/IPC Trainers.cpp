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
#define sz 100005
#define sz1 100005

/******   start your code   *******/

class extra
{
public:
    lld dibe,sadnes;
    extra()
    {
        dibe=sadnes=0;
    }
    extra(lld a,lld b)
    {
        dibe=a;
        sadnes=b;
    }
};
bool operator < (extra a,extra b)
{
    if(a.sadnes>b.sadnes) return false;
    return true;
}
priority_queue<extra> pqq;

class teacher
{
public:
    lld day,tec,sad;
    teacher()
    {
        sad=day=tec=0;
    }
    teacher(lld a,lld b,lld c)
    {
        sad=a;
        day=b;
        tec=c;
    }
};
bool operator < (teacher a,teacher b)
{
    if(a.day<b.day) return false;
    if(a.day==b.day)
    {
        if(a.sad>b.sad) return false;
        else return true;
    }
    return true;
}
priority_queue<teacher> pq;

int main()
{
    lld n,d,cnt,res,ekhn;
    teacher tmp,age,pore;
    extra nibo;
    rg int i;
    TEST // "test" as variable
    {
        sf("%lld %lld",&n,&d);
        for(i=0; i<n; i++)
        {
            sf("%lld %lld %lld",&tmp.day,&tmp.tec,&tmp.sad);
            pq.push(tmp);
        }
        while(!pq.empty())
        {
            age=pq.top();
            pq.pop();
            pf("1.age = %lld %lld %lld\n",age.day,age.tec,age.sad);
            if(!pq.empty())
            {
                pore=pq.top();
                pf("1.pore = %lld %lld %lld\n",pore.day,pore.tec,pore.sad);
            }
            else
            {
                age.tec-=(d-age.day+1);
                pf("special age = %lld %lld %lld\n",pore.day,pore.tec,pore.sad);
                if(age.tec>0) pq.push(age);
                chk1;
                break;
            }
            if(age.day<pore.day)
            {
                age.tec-=(pore.day-age.day);
                age.day=pore.day;
                pf("2.age = %lld %lld %lld\n",age.day,age.tec,age.sad);
                if(age.tec>0) pq.push(age);
            }
            else if(age.day==pore.day)
            {
                age.tec--;
                pf("3.age = %lld %lld %lld\n",age.day,age.tec,age.sad);
                while(age.day==pore.day)
                {
                    nibo.dibe=pore.tec;
                    nibo.sadnes=pore.sad;
                    pqq.push(nibo);
                    if(!pq.empty()) pq.pop();
                    else break;
                }
                if(age.tec>0)
                {
                    nibo.dibe=age.tec;
                    nibo.sadnes=age.sad;
                    pqq.push(nibo);
                }
                if(pore.day==d) break;
            }
        }
        res=0;
        while(!pq.empty())
        {
            tmp=pq.top();
            res+=(tmp.tec*tmp.sad);
            pq.pop();
        }
        pf("                                             see = %lld\n",res);
    }
    return 0;
}

/*
input:
7 10
5 3 10
2 7 5
2 2 7
5 2 11
1 2 1
7 1 12
3 2 26

output:
3
2 3
1 2 300
2 2 100
2 3
1 1 100
2 2 300
2 3
3 2 150
1 1 200

*/















