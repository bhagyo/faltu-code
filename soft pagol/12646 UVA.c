#include<stdio.h>

int main()
{
    int x,y,z,l;
    while(scanf("%d %d %d",&x,&y,&z)!=EOF)
    {
        if((x==y)&&(y==z))
            printf("*\n");
        else if((x==y)&&(y!=z))
            printf("C\n");
        if((x!=y)&&(y==z))
            printf("A\n");
        if((x!=y)&&(y!=z))
            printf("B\n");
    }
    return 0;
}
