#include<stdio.h>
#include<math.h>
int main()
{
    int n,h,o,re;
    scanf("%d",&n);
    scanf("%d",&h);
    n--;
    re=h+1;
    while(n--)
    {
        printf("re = %d\n",re);
        scanf("%d",&o);
        if(o<=h)
            re+=(h-o);
        else
        {
            re+=(o-h);
        }
        re+=2;
        h=o;
    }
    printf("%d",re);
    return 0;
}
