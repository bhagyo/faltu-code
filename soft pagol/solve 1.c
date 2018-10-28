#include<stdio.h>

int main()
{
    float x,y,z;
    printf("enter your 1st number: ");
    scanf("%f",&x);
    printf("enter your 1st number: ");
    scanf("%f",&y);
    printf("enter your 1st number: ");
    scanf("%f",&z);
    if(x>y&&x>z){
        printf("1st number is the biggest number");
    }
    else if(y>x&&y>z){
        printf("2nd number is the biggest number");
    }
    else{
        printf("3rd number is the biggest number");
    }
    return 0;
}
