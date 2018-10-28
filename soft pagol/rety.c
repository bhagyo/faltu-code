#include<stdio.h>
#define MAX 100
void add(int a,int b, int c);
int arr[MAX];
int i;
int main()
{
    int num1,num2,num3;
    while(scanf("%d %d %d",&num1,&num2,&num3)!=EOF)
    {
        add(num1,num2,num3);
        printf("\n");
    }
    return 0;
}
void add(int a,int b, int c)
{
    int x,y,sum;
    if((a+b+c)!=0)
    {
        x=a%10;
        y=b%10;
        sum=x+y+c;
        /**arr[i]=sum%10;
        i++;*/
        add(a/10,b/10,sum/10);
        printf("\n%d\n",sum%10);
    }
}
