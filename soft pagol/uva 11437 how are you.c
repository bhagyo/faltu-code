#include<stdio.h>
int main()
{
    int day1,day2,mon1,mon2,year1,year2;
    int cases,i,j,k,l,age;
    scanf("%d",&cases);
    for(i=1; i<=cases; i++)
    {
        scanf("%d/%d/%d",&day1,&mon1,&year1);
        scanf("%d/%d/%d",&day2,&mon2,&year2);
        age=year1-year2;
        if(mon1<mon2)
            age--;
        else if(mon1==mon2)
            if(day1<day2)
                age--;
        if(age<0)
            printf("Case #%d: Invalid birth date\n",i);
        else if(age>130)
            printf("Case #%d: Check birth date\n",i);
        else
            printf("Case #%d: %d\n",i,age);
    }
    return 0;
}
