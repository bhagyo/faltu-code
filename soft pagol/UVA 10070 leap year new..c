#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,o,p,ck1,ck2,ck3,ck4,ck5,store,ck=0;
    int leap,hulu,bulu;
    char year[100000];
    while(gets(year))
    {
        store=ck1=ck2=ck3=ck4=ck5=0;
        leap=hulu=bulu=0;
        for(i=0; year[i]; i++)
        {
            ck1=ck1*10+(year[i]-'0');
            ck1%=4;
        }
        if(ck1==0)
        {
            for(i=0; year[i]; i++)
            {
                ck2=ck2*10+(year[i]-'0');
                ck2%=100;
            }
            if(ck2==0)
            {
                for(i=0; year[i]; i++)
                {
                    ck3=ck3*10+(year[i]-'0');
                    ck3%=400;
                }
                if(ck3==0)
                    leap=1;
            }
            else
                leap=1;
        }
        for(i=0; year[i]; i++)
        {
            ck4=ck4*10+(year[i]-'0');
            ck4%=15;
        }
        if(ck4==0)
            hulu=1;
        if(leap==1)
        {
            for(i=0; year[i]; i++)
            {
                ck5=ck5*10+(year[i]-'0');
                ck5%=55;
            }
            if(ck5==0)
                bulu=1;
        }
        if(ck!=0)
            printf("\n");
        if(leap==1)
        {
            printf("This is leap year.\n");
            if(bulu==1)
                printf("This is buluculu festival year.\n");
        }
        if(hulu==1)
            printf("This is huluculu festival year.\n");
        if(leap==0&&hulu==0&&bulu==0)
            printf("This is an ordinary year.\n");
        ck++;
    }
    return 0;
}
