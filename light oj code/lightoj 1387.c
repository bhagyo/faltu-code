#include <stdio.h>
#include <string.h>
int main ()
{
    int cases,store,donate,i,times;
    char category[15];
    scanf("%d",&cases);
    for(i=1; i<=cases; i++)
    {
        store=0;
        printf("Case %d:\n",i);
        scanf("%d",&times);
        while(times--)
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
    }
    return 0;

}
