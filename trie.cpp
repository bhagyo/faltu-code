#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include<queue>
#include<vector>
#include<algorithm>
#include<bitset>
#include<algorithm>
#include<set>
#include<limits.h>
#include <sstream>

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

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 10005
#define sz1 23

/******   start your code   *******/

vector<string> vec;
string str;
struct node
{
    node* next[26 + 1];
    int cnt;
    node()
    {
        cnt=1;
        for (int i = 0; i < 26; i++)
            next[i] = NULL,cnt[i]=0;
    }
} *root;
void _insert(int len)
{
    node* curr=root;
    for (int i=0; i<len; i++)
    {
        int id=str[i]-'a';
        if(curr->next[id]==NULL)
            curr->next[id] = new node();
        curr->cnt[id]++;
        curr = curr->next[id];
    }
}
int _search(int len)
{
    node* curr = root;
    int mx=-1;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if(curr->cnt[id]==1)
            return i;
        curr=curr->next[id];
    }
    return len;
}
int main()
{
    root = new node();
    while(getline(cin,str))
    {
        if(str.size()==0) break;
        vec.pb(str);
        _insert(str.size());
    }
    int i,lop,see,j;
    lop=vec.size();
    for(i=0; i<lop; i++)
    {
        str=vec[i];
        see=_search(str.size());
        cout<<str<<" ";
        for(j=0; j<=see; j++)
            pf("%c",str[j]);
        nn;
    }
    return 0;
}
/*
carbohydrate
cart
carburetor
caramel
caribou
carbonic
cartilage
carbon
carriage
carton
car
carbonate

Output
*/
