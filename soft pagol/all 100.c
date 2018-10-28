#include<stdio.h>
#include<string.h>
char* letter_a(char *str[])
{
    int i,j=0;char val[100];
    for(i=0;str[i];i++)
        if(str[i]=='a')
        {
            val[j]=str[i];
            j++;
        }
    val[j]='\0';
    return val;
}
int main()
{
    int i,j,k,l,len,ck;
    char name[100],c_name[100];
    scanf("%s",name);
    strcpy(c_name,letter_a(name));
    printf("%s",c_name);
    return 0;
}





