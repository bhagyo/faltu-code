#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int item,cases,price[20001],i,j;
    long int sum;
    scanf("%d",&cases);
    while(cases--)
    {
        sum=0;
        scanf("%d",&item);
        for(j=0;j<item;j++)
            scanf("%d",&price[j]);
        sort(price,price+item);
        for(j=item-3; j>=0; j-=3)
            sum=sum+price[j];
        printf("%ld\n",sum);
    }
    return 0;
}
