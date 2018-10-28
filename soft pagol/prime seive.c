#include <math.h>
#include <stdio.h>

main()
{
    long int max,k, i, q, j, maior , maior_n,fim[900],inicio[900];
    float raiz;
    maior_n = maior = q = 0;
    scanf("%d",&max);
    for(k = 0; k < max ; k++)
        scanf("%d %d",&inicio[k],&fim[k]);
    for(k = 0; k < max ; k++)
    {
        for(j=inicio[k] ; j < (fim[k] + 1) ; j++)
        {
            raiz = sqrt(j);
            for(i=1 ; i < raiz ; i++)
                if ((j % i) == 0)
                    q = q + 2;
            if ((raiz * raiz) == j)
                q++;
            if (q > maior)
            {
                maior = q;
                maior_n = j;
            }
            q = 0;
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.n",inicio[k],fim[k],maior_n,maior);
        maior = maior_n = q = 0;
    }
}
