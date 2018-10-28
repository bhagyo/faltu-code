#include<stdio.h>
int main()
{
    long int num1,num2;
    int count,c;
    while(scanf("%lu %lu",&num1,&num2)&&num1!=0||num2!=0)
    {
        count=c=0;
        while(num1||num2)
        {
            c=(num1%10+num2%10+c)/10;
            num1=num1/10;
            num2=num2/10;
            count+=c;
        }
        if(!count)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",count);
    }
    return 0;
}
