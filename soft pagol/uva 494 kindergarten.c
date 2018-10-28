#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,count,ck;
    char str[10000];
    while(gets(str))
    {
        count=0;
        ck=1;
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            {
                if(ck)
                    count++;
                ck=0;
            }
            else
                ck=1;
        }
        printf("%d\n",count);
    }
    return 0;
}





