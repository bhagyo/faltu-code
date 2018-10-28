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
#define sz 10005
#define sz1 201

/******   start your code   *******/

#define Max 10000005
int ST[24][Max];
int A[Max];
void Compute_ST(int N)
{
    for (int i=0; i<N; i++)ST[0][i] = i;
    for (int k = 1; (1 << k)<N; k++){
        pf("1.res = %d\n",1<<k);
        for (int i=0; i+(1<<k)<=N; i++){
            pf("2.res = %d\n",i+(1<<k));
            int x = ST[k-1][i];
            int y = ST[k-1][i+(1<<k-1)];
            ST[k][i]=A[x]<=A[y]?x:y;
}}}
//15 11 7 24 5 8 16 -5 7 3 13 1 2 -9 4 1

int RMQ(int i, int j){
    int k = log2(j-i);
    pf("k = %d\n",k);
    pf("ajaira = %d\n",j-(1<<k)+1);
    int x = ST[k][i];
    int y = ST[k][j-(1<<k)+1];
    return A[x] <= A[y] ? x : y;
}
int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    Compute_ST(N);
    int Q;
    cin>>Q;
    while(Q--)
    {
        int x,y;
        cin>>x>>y;
        cout<<A[RMQ(x,y)]<<endl;
    }
    return 0;
}
