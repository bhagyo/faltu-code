#include<stdio.h>
int* bubble_sort(int [],int);
int main()
{
    int i,j,len,array[1000];
    scanf("%d",&len);
    for(i=0;i<len;i++)
        scanf("%d",&array[i]);
    bubble_sort(array,len);
    for(i=0;i<len;i++)
        printf("%d ",array[i]);
    return 0;
}
int* bubble_sort(int str[],int ar_len)
{
    int i,j,temp;
    for(i=0;i<ar_len-1;i++)
        for(j=i+1;j<ar_len;j++)
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
    return str;
}

