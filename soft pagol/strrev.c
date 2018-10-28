#include<stdio.h>
#define MAX 100
int rev_num(int x);
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        num=rev_num(num);
        printf("%d\n",num);
    }
    return 0;
}
int rev_num(int x)
{
    int temp,store=0;
    while(x!=0)
    {
        store=store*10+x%10;
        x=x/10;
    }
    return store;
}
