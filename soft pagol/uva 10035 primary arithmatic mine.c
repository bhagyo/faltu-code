#include<stdio.h>
int main()
{
    long long int num1,num2;
    int ln,carry;
    while(scanf("%lld %lld",&num1,&num2)&&num1!=0||num2!=0)
    {
        carry=ln=0;
        while(num2||num1)
        {
            ln=num2%10+num1%10+ln/10;
            num1=num1/10;
            num2=num2/10;
            if(ln>9)
                carry++;
        }
        if(!carry)
            printf("No carry operation.\n");
        else if(carry==1)
            printf("%d carry operation.\n",carry);
        else
            printf("%d carry operations.\n",carry);
    }
    return 0;
}
