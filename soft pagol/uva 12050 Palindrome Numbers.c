#include<stdio.h>
int main()
{
    int i,tc,store,mx,num1,num2,num3,nth;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d %d %d %d",&num1,&num2,&num3,&nth);
        if((num2-num1)==(num3-num2))
            printf("Case %d: %d\n",i,num1+((num2-num1)*(nth-1)));
        else
            printf("Case %d: Error\n",i);
    }
    return 0;
}






