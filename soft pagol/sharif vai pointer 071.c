#include<stdio.h>
int main()
{
    int x,y,*p,*q;
    p=&x;
    q=&y;
    q=p;
    x=5;
    printf("%d %d",*q,x);
    return 0;
}
