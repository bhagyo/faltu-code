#include<stdio.h>

int main()
{
    int i;
    printf("the halucinatinr number:  ");
    scanf("%d %d",&i);
    printf("%d %d %d %d %d %d %d %d",++i,i++,++i,i,--i,++i,i--,i++);
    return 0;
}
