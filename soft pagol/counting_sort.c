#include<stdio.h>
#include<string.h>
#define maxi 1000
#define max 128
int main()
{
    int i,j,a,min,index,str[max],tc,count,y;
    char ch,car,str2[max];
    while(gets(str2))
    {
        car=20;
        tc=count=0;
        for(i=0;i<=128;i++)str[i]=0;
        for(i=0;str2[i]!='\0';i++)
        {
            y=str2[i];
            str[y]++;
            if(car!=str2[i])
            {
                car=str2[i];
                tc++;
            }
        }
        for(i=32;i<=128;i++)
        {
            if(str[i]==0)continue;
            min=str[i];
            a=1;
            for(j=33;j<=128;j++)
            {
                if(i==j || str[j]==0)continue;
                if(min>str[j])
                {
                    min=str[j];
                    index=j;
                    a=0;
                }
            }
            if(a==1)
            {
                printf("%d %d\n",i,str[i]);
                str[i]=0;
                count++;
            }
            else
            {
                printf("%d %d\n",index,min);
                str[index]=0;
                count++;
            }
            if(count==tc)break;
            i=33;
        }
        printf("\n");
    }
    return 0;
}
