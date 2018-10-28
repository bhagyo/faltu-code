#include<cstdio>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
char number[100000];
int main()
{
    long long int num,i,j,k,l;
    while(scanf("%lld",&num)==1)
    {
        j=0;
        if(num==0)
            break;
        itoa(num,number,2);
        for(i=0;number[i];i++)
            if(number[i]=='1')
                j++;
        printf("The parity of %s is %d (mod 2).\n",number,j);
    }
    return 0;
}
