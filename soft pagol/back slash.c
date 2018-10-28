using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
string rem(string a)
{
    int s=a.length()-1;
    string::iterator it;
    it=a.end();
    while(a[s]==’0′)
    {
        a.erase(a.begin()+s);
        s–;
        if(!s) break;
    }
    return a;
}
string remov(string a)
{
    string::iterator it;
    it=a.begin();
    while(a[0]==’0′)
    {
        a.erase(a.begin());
        if(a.length()==1) break;
    }
    return a;
}
string add(string a, string b)
{
    int i,val=0,till=min(a.length(),b.length());
    string ret;
    for(i=0;i<till;i++)
    {
        val=(a[i]-‘0′)+(b[i]-‘0′)+val;
        ret.push_back(val%10+’0′);
        val/=10;
    }
    while(i<a.length())
    {
        val=(a[i]-‘0′)+val;
        ret.push_back(val%10+’0′);
        val/=10;
        i++;
    }
    while(i<b.length())
    {
        val=(b[i]-‘0′)+val;
        ret.push_back(val%10+’0′);
        val/=10;
        i++;
    }
    while(val)
    {
        ret.push_back(val%10+’0′);
        val/=10;
    }
    return ret;
}
int main()
{
    string a,b;
    int cases;
    while(scanf("%d",&cases)==1){
    while(cases–)
    {
        cin>>a>>b;
        a=rem(a);
        b=rem(b);
        a=add(a,b);
        a=remov(a);
        if(a==””) a=”0″;
        cout<<a<<endl;
    }}
    return 0;
}


/**#include <stdio.h>
char* upper(char *word);
int main()
{
    char word[100];
    printf("Enter a string: ");
    gets(word);
    printf("\nThe uppercase equivalent is: %s\n",upper(word));
    return 0;
}

char* vowel(char *word)
{
    int i,j=0;
    char str[100];
    for(i=0;word[i];i++)
        if(word[i]=='a')
        {
            str[j]=word[i];
            j++;
        }
    str[j]='\0';
    return str;
}
*/
