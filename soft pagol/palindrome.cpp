#include <stdio.h>
int main()
{
    char ch;
    int i,count=0;
    printf("Enter alphabet\n");
    for(i=0; i<5; i++)
    {
        scanf("%c",&ch);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            count=count++;
    }
    printf("%d vowels\n",count);
}
