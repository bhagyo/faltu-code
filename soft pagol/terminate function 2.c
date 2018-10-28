#include<stdio.h>
#include<conio.h>

int main()
{
    int i,sum=0;
    printf("what will be the last figure: ");
    scanf("%d",&i);
    for(i=1;i++){
    sum+=i;
    }
    printf("sum= %d",sum);
    return 0;
}
