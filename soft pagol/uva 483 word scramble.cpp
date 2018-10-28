#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 1000
char* rev_string(char str1[],int n)
{
    char temp;
    int i=0,j=n;
    while(i<j/2)
    {
        temp=str1[i];
        str1[i]=str1[j-i-1];
        str1[j-i-1]=temp;
        i++;
    }
    return str1;
}
char str2[max];
int main()
{
    int i,j,k,l,m,ck,len;
    char str[max],str1[max];
    while(gets(str))
    {
        for(k=0; k<1000; k++) ///for initialization
            str2[i]=000;
        j=0,ck=0;
        for(i=0; str[i]; i++)
        {
            k=0;
            for(; str[j]!=' '; j++)///finding each word for separation
            {
                str1[k]=str[j];
                k++;
            }
            j++;
            str1[k]='\0';
            printf("portion =%s\n",str1);
            len=strlen(str1);
            rev_string(str1,len);/// reversing the word with function
            if(ck!=0)
                strcat(str2," ");
            strcat(str2,str1);
            printf("str2=%s\n",str2);
            ck++;
        }
        printf("\nmain=%s\n",str2);
    }
    return 0;
}
