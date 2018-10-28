#include<stdio.h>
int main()
{
    long int count,add,num,rev,irri,i,j,d,k;
    while(scanf("%ld",&irri)==1)
    {
        for(i=0; i<irri; i++)
        {
            scanf("%ld",&num);
            count=0;
            rev=0;
            for(j=num; j!=0; j=j/10)
            {
                d=j%10;
                rev=rev*10+d;
            }
            if(num!=rev)
            {
                for(k=0; k<1000; k++)
                {
                    add=num+rev;
                    rev=0;
                    num=add;
                    for(j=num; j!=0; j=j/10)
                    {
                        d=j%10;
                        rev=rev*10+d;
                    }
                    if(num==rev)
                        break;
                }
                printf("%ld %ld\n",k+1,num);
            }
            else
                printf("0 %ld\n",num);
        }
    }
    return 0;
}
