/******   HAREE KRISHNA   *******/

#include<bits/stdc++.h>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef float f;
typedef double lf;
typedef unsigned int u;
typedef unsigned long int lu;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define FOR(i,x,cases) for(i=x;i<cases;i++)
#define FORC(i,x,cases) for(i=x;i<=cases;i++)
#define FORin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define chk printf("chek\n")
#define chk1 printf("chek1\n")
#define size 10000
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

/******   start your code   *******/

int main()
{
    int i,j,k,cases,count,casno=1;
    C ch,look[31];
    bool ck1;
    while(sf("%d",&cases)==1)
    {
        getchar();
        count=0;
        while(cases--)
        {
            j=0;
            int word[26]= {0};
            ch=getchar();
            while(ch!='\n')
            {
                look[j++]=ch;
                word[ch-97]++;
                ch=getchar();
            }
            look[j]='\0';
            ck1=true;
            if(strlen(look)==1)
                ck1=false;
            sort(word,word+26);
            for(i=1; i<26; i++)
                if((word[i-1]==word[i]) && word[i]!=0)
                {
                    ck1=false;
                    break;
                }
            if(ck1)
                count++;
        }
        pf("Case %d: %d\n",casno++,count);
    }
    return 0;
}











