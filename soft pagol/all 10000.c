#include<stdio.h> #include<conio.h>

void main()
{
    int n=0,m;
    scanf("%d",&m);
    while(1){
        if(n%2==0)
        printf("%d\n", n);
        n++;
        if(n>m)
        break;
    }
    getch();
    return 0;
}
