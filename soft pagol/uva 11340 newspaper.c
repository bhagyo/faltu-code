#include<stdio.h>
#include<string.h>
int main()
{
    long int cases,c,val,line,i,j,k,len,num[200];
    double price;
    char text[10000],ch[200];
    scanf("%ld\n",&cases);
    for(k=1; k<=cases; k++)
    {
        price=0;
        scanf("%ld\n",&val);
        for(j=0; j<val; j++)
            scanf("%c %ld\n",&ch[j],&num[j]);
        scanf("%ld\n",&line);
        for(j=0; j<line; j++)
        {
            gets(text);
            for(i=0; i<val; i++)
                for(c=0; text[c]; c++)
                    if(ch[i]==text[c])
                        price+=num[i];
        }
        printf("%.2lf$\n",price/100);
    }
    return 0;
}
