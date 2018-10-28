#include<stdio.h>
#include<string.h>
#define max 101
int main()
{
    char str[max],str1[max],temp;
    scanf("%s",str);
    int i,j,k,ln;
    ln=strlen(str);
    for(j=i=0; i<ln; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            str1[j]=str[i];
            j++;
        }
        else
            if(str1[j-1]!=str[i])
            {
                str1[j]=str[i];
                j++;
            }
    }
    str1[j]='\0';
    printf("%s",str1);
    return 0;
}
