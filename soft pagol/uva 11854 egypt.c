#include<stdio.h>
unsigned long long int num[3],temp;
int main()
{
    int i,j,k,ck;
    while(scanf("%llu %llu %llu",&num[0],&num[1],&num[2])==3)
    {
        if(num[0]==0&&num[1]==0&&num[2]==0)
            break;
        for(i=0; i<2; i++)
            for(j=i+1; j<3; j++)
                if(num[i]>num[j])
                {
                    temp=num[i];
                    num[i]=num[j];
                    num[j]=temp;
                }
        if((num[0]*num[0]+num[1]*num[1])==num[2]*num[2])
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
