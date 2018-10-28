#include<stdio.h>
int main()
{
    int cases, cel, far,i;
    while(scanf("%d", &cases) == 1){
        for(i = 0; i < cases; i++){
            scanf("%d%d", &cel, &far);
            double f = 9*cel/5.0+far;
            double ans = f*5/9;
            printf("Case %d: %.2lf\n", i+1, ans);
        }
    }
    return 0;
}
