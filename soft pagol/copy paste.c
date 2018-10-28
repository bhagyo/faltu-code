#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n < 10)
    {
        n = n + 1;
        if (n % 2 == 0)
            continue;
        printf("%d\n", n);
    }
    return 0;
}
