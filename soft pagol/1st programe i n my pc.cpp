#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define max 101
void upper_case_string(char* string)
{
    int i;
    for(i=0; i<strlen(string); i++)
        string[i] = toupper(string[i]);
}
int main()
{
    char a_string[max];
    scanf("%s",a_string);
    printf("Original string: %s \n", a_string);
    upper_case_string(a_string);
    printf("New string: %s \n", a_string);
    return 0;
}
