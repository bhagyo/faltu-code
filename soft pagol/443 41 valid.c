#include<stdio.h>
int total(char []);
int take(int);
int main()
{
    int i,j,k,val1,val2;
    char name1[26],name2[2];
    while(scanf("%s%s",name1,name2)==2)
    {
        val1=total(name1);
        val2=total(name2);
        printf("%d %d\n",val1,val2);
        ///nval1=take(val1);
        ///nval2=take(val2);
    }
    return 0;
}
int total(char str[])
{
    int i,store=0;
    for(i=0;str[i];i++)
        if(isalpha(str[i]))
            store+=(str[i]-96);
    printf("store = %d\n",store);
    return store;
}
int take(int num)
{
    int store=0;
    while(num!=0)
    {
        store+=(num%10);
        num/=10;
    }
    return store;
}
