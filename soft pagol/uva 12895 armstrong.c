#include<stdio.h>
#include<math.h>
#include<string.h>
long long int armstrong(int num,int len);
long long int power(int base,int puf);
int main()
{
    char num[17];
    int cases,n_num,len;
    while(scanf("%d\n",&cases)==1)
        while(cases--)
        {
            scanf("%s",&num);
            len=strlen(num);
            n_num=atol(num);
            if(n_num==armstrong(n_num,len))
                printf("Armstrong\n");
            else
                printf("Not Armstrong\n");
        }
    return 0;
}
long long int armstrong(int num,int len)
{
    long long int ck,store=0;
    while(num!=0)
    {
        ck=num%10;
        store+=power(ck,len);
        num/=10;
    }
    return store;
}
long long int power(int base,int puf)
{
    long int i,look=base;
    for(i=1;i<puf;i++)
        base=base*look;
    return base;
}
