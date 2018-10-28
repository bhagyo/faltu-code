#include<stdio.h>
int main()
{
    char line[16],character;
    int c;
    c=0;
    printf("Enter text.press<return> at end\n");
    do
    {
        character=getchar();
        line[c]=character;
        printf("%c{%d}\n",line[c],c);
        c++;
    }
    while(character!='\n');
    //c=c-1;
    //line[c]='\0';
    printf("\n%s\n",line);
    return 0;
}//jabir jim bhaggo
