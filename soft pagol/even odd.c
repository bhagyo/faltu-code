#include<stdio.h>

int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("this is even number");
    }
    else{
        printf("this is odd number");
    }
    return 0;
}
