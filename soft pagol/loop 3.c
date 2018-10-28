#include<stdio.h>

int main()
{
    int n=1;
    printf("%d\n",n);
    while(n<100)
    {
        printf("%d\n",n);
        if(n%2==0)
        {
            printf("%d\n",n);
            n++;
        }
    }
    return 0;
}
