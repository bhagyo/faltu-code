#include<stdio.h>
int main()
{
    int num,temp,store;
    while(scanf("%d",&num)==1&&num!=0)
    {
        store=2*num*num*num+3*num*num+num;
        printf("%d\n",store/6);
    }
    return 0;
}
