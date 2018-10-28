#include<stdio.h>
#include<string.h>
char val[100],name[100],c_name[100];
char* letter_a(char str[])
{
    int i,j=0;
    for(i=0; str[i]; i++)
        if(str[i]=='a'||str[i]=='A')
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
    scanf("%s",name);
    strcpy(c_name,letter_a(name));
    printf("%s",c_name);
    return 0;
}
