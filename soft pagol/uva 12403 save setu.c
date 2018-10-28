#include <stdio.h>
#include <string.h>
int main ()
{
    int cases,store=0,donate;
    char category[15];
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%s",category);
        if (strcmp (category,"donate")==0)
        {
            scanf ("%d",&donate);
            store+=donate;
        }
        else
            printf ("%d\n",store);
    }
    return 0;

}
