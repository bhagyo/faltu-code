#include<stdio.h>

int main()
{
    float x,marks;
    printf("enter your marksks: ");
    scanf("%f",&marks);
    if(marks>=80){
        printf("you've got A+\n");
    }
    else if(marks>=70){
        printf("you've got A\n");
    }
    else if(marks>=60){
        printf("you've got A-\n");
    }
    else if(marks>=50){
        printf("you've got B\n");
    }
    else if(marks>=40){
        printf("you've got C\n");
    }
    else if(marks>=30){
        printf("you've got D\n");
    }
    else if(marks<=29){
        printf("you've got A\n");
    }
    if(n>100){
        break;
    }
    return 0;
}
