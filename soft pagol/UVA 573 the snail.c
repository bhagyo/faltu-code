#include<stdio.h>
int main()
{
    double height,upper,slide,fatigue;
    int i,j,k,l,m,n;
    double store,ck,ini,ans;
    while(scanf("%lf ",&height)==1&&height!=0)
    {
        scanf("%lf %lf %lf",&upper,&slide,&fatigue);
        fatigue=(upper*fatigue)/100;
        ini=0.0;
        for(i=1;;i++)
        {
            ini+=upper;
            upper-=fatigue;
            if(ini>height)
                break;
            ini-=slide;
            if(ini<0)
                break;
        }
        if(ini>=0)
            printf("success on day %d\n",i);
        else
            printf("failure on day %d\n",i);
    }
    return 0;
}
