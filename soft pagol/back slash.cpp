#include <stdio.h>
#include <string.h>
char* vowel_a(char word[]);
int main()
{
    char word[100],str[100];
    printf("Enter a string: ");
    gets(word);
    strcpy(str,vowel_a(word));
    printf("\nThe uppercase equivalent is: %s\n",str);
    return 0;
}
char str[100];
char* vowel_a(char word[])
{
    int i,j=0;
    for(i=0;word[i];i++)
        if(word[i]=='a')
        {
            str[j]=word[i];
            j++;
        }
    str[j]='\0';
    return str;
}
