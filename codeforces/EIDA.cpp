#include <iostream>
#include <cstring>
#include <cstdio>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<stack>
#include<list>
#include<climits>
#define sz 200005
using namespace std;

char* removeUtil(char *str, char *last_removed)
{
    if (str[0] == '\0' || str[1] == '\0')
        return str;
    if (str[0] == str[1])
    {
        *last_removed = str[0];
        while (str[1] && str[0] == str[1])
            str++;
        str++;
        return removeUtil(str, last_removed);
    }
    char* rem_str = removeUtil(str+1, last_removed);
    if (rem_str[0] && rem_str[0] == str[0])
    {
        *last_removed = str[0];
        return (rem_str+1);
    }
    if (rem_str[0] == '\0' && *last_removed == str[0])
        return rem_str;
    rem_str--;
    rem_str[0] = str[0];
    return rem_str;
}

char *remove(char *str)
{
    char last_removed = '\0';
    return removeUtil(str, &last_removed);
}

// Driver program to test above functions
int main()
{
    char str1[sz];
    char str2[sz];
    while(scanf("%s",str1)!=EOF)
    {
        strcpy(str2,remove(str1));
        if(strcmp(str2,"")==0) cout<<-1<<endl;
        else cout<<str2<<endl;
    }

    return 0;
}
/*
xraccabccbry
baabd
aaaa
*/
