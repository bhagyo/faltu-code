#include<stdio.h>
#include<string.h>
#define max 100
int ln;
char str1[max];
void rev_string(char str1[],int n);
int main()
{
    char str2[max];
    scanf("%s",str1);
    ln= strlen(str1);
    rev_string(str1,ln);/// problem
    strcpy(str2,str1);
    printf("%s\n",str2);
    return 0;
}
void rev_string(char str1[],int n)
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
}
