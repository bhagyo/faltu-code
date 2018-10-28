#include<stdio.h>
#include<string.h>
#include<ctype.h>
int total(char str[]);
int main()
{
    int i,j,k,l,cases=1;
    float val_name1,val_name2;
    char name1[27],name2[27];
    while(gets(name1))
    {
        gets(name2);
        val_name1=total(name1);
        val_name2=total(name2);
        if(val_name1==0&&val_name2==0)
            printf("100 %%\n");
        else if(val_name1>val_name2)
            printf("%0.2f %%\n",(val_name2/val_name1)*100);
        else
            printf("%0.2f %%\n",(val_name1/val_name2)*100);
    }
    return 0;
}
int total(char str[])
{
    int i,val,store,temp;
    store=temp=0;
    for(i=0; str[i]; i++)
        if(isalpha(str[i]))
        {
            if(isupper(str[i]))
                store+=(str[i]-64);
            else
                store+=(str[i]-96);
        }
    if(store==0)
        return store;
    while(store>=10)
    {
        val=0;
        while(store!=0)
        {
            val+=(store%10);
            store/=10;
        }
        store=val;
    }
    return store;
}
