#include<stdio.h>
int main ()
{
    int num1,num2,result;
    while(2==scanf("%d%d",&num1,&num2))
    {
        result=num1+num2;
        printf("%d + %d = %d\n\n\n",num1,num2,result);
    }
    return 0;
}
