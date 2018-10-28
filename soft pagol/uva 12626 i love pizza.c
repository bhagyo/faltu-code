#include<stdio.h>
int main()
{
    int i,j,k,l,pizza,cases;
    int A,G,I,M,R,T;
    char letter[700];
    while(scanf("%d",&cases)==1)
    {
        while(cases--)
        {
            A=G=I=M=R=T=0;
            scanf("%s",letter);
            for(i=0; letter[i]; i++)
            {
                if(letter[i]=='A')
                    A++;
                else if(letter[i]=='G')
                    G++;
                else if(letter[i]=='I')
                    I++;
                else if(letter[i]=='M')
                    M++;
                else if(letter[i]=='R')
                    R++;
                else if(letter[i]=='T')
                    T++;
            }
            for(i=0;; i++)
            {
                if(A<3)
                    break;
                else if(G<1)
                    break;
                else if(I<1)
                    break;
                else if(M<1)
                    break;
                else if(R<2)
                    break;
                else if(T<1)
                    break;
                A-=3;
                G--;
                I--;
                M--;
                R-=2;
                T--;
            }
            printf("%d\n",i);
        }
    }
    return 0;
}
