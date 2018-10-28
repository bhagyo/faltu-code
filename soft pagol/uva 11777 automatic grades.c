#include<stdio.h>
int main()
{
    int cases,i;
    float term1,term2,finall,aten,ct1,ct2,ct3,avr,sum;
    scanf("%d",&cases);
    for(i=1; i<=cases; i++)
    {
        scanf("%f %f %f %f %f %f %f",&term1,&term2,&finall,&aten,&ct1,&ct2,&ct3);
        if(ct1<=ct2 && ct1<=ct3)
            avr=(ct2+ct3)/2.0;
        else if(ct2<=ct1 && ct2<=ct3)
            avr=(ct1+ct3)/2.0;
        else if(ct3<=ct1 && ct3<=ct2)
            avr=(ct1+ct2)/2.0;
        sum=term1+term2+finall+aten+avr;
        if(sum>=90.00)
            printf("Case %d: A\n",i);
        else if(sum>=80.00)
            printf("Case %d: B\n",i);
        else if(sum>=70.00)
            printf("Case %d: C\n",i);
        else if(sum>=60.00)
            printf("Case %d: D\n",i);
        else if(sum<60.00)
            printf("Case %d: F\n",i);
    }
    return 0;
}
