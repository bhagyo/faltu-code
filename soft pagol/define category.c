#include <stdio.h>
#include <string.h>
void str(char str1[], char str2[])
{
    int i, j=0;
    for(i=0; str1[i]!='\0'; i++)
        if(str1[i]=='a' || str1[i]=='A')
        {
            str2[j]=str1[i];
            j++;
        }
}
int main()
{
    char arpon[10], out[10]= {'\0'};
    gets(arpon);
    str(arpon, out);
    printf("old = %d,new = %d",strlen(arpon),strlen(out));
    return 0;
}
