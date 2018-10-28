#include<stdio.h>
#include<string.h>
int main()
{
    int cases,i,j,k;
    char num[10],ch;
    scanf("%d%c",&cases,&ch);
    while(cases--)
    {
        gets(num);
        if(strlen(num)==5)
            printf("3\n");
        else if((num[1]=='n'&&num[2]=='e')||(num[0]=='o'&&num[2]=='e')||(num[0]=='o'&&num[1]=='n'))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
