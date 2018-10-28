#include<stdio.h>
int main()
{
    int i,j,k,l,age,ck,cases,store,count=1;
    int d1,d2,m1,m2,y1,y2;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        age=y1-y2;
        if(m1<m2)
            age--;
        else if(m1==m2)
            if(d1<d2)
                age--;
        if(age<0)
            printf("Case #%d: Invalid birth date\n",count);
        else if(age>130)
            printf("Case #%d: Check birth date\n",count);
        else
            printf("Case #%d: %d\n",count,age);
        count++;
    }
    return 0;
}



