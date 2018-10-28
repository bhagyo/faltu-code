#include<bits/stdc++.h>
using namespace std;
char ext[5];
const char *gen(int n)
{
    for(int i=0; i<n; i++)
    {
        ext[i] = rand()%26 + 'a';
    }
    return ext;
}
int main()
{
    char ch[10000],my[10000];
    for(int i=0; i<=1000; i++)
    {
        strcat(ch,gen(0));
        strcpy(my,ch);
        strcat(my,".");
        strcat(my,gen(4));
        freopen(my, "w", stdout);
    }

    return 0;
}


