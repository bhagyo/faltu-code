#include<stdio.h>

int main()
{
    int num;
    printf("Enter the days :\n");
    scanf("%d",&num);
    printf("It's %d months and %d days\n",num/30,num%30);

    return 0;
}
