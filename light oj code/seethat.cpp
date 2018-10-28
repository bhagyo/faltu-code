#include <cstdio>
int main()
{
    int test, cs, n, i, b;
    scanf("%d", &test);
    for(cs = 1; cs <= test; cs++)
    {
        scanf("%d", &n);
        for(i = 0; !(n & (1<<i)); i++);
        printf("val of I = %d\n",i);
        for(b = -1; n & (1<<i); i++, b++);
        printf("val of B = %d\n",b);
        n >>= i;
        printf("now see n = %d,i = %d\n",n,i);
        n |= 1;
        printf("next see n = %d\n",n);
        n <<= i;
        printf("last see n = %d,i = %d\n",n,i);
        n |= ((1 << b)-1);
        printf("Case %d: %d\n", cs, n);
    }
    return 0;
}
