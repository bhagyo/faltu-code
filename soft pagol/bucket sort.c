#include<stdio.h>
void Bucket_Sort(int array[], int n)
{
    int i, j,max=0;
    int count[100000]= {0};

    for(i=0; i < n; i++)
    {
        (count[array[i]])++;
        if(array[i]>max) max=array[i];
    }
    for(i=0,j=0; i < max; i++)
    {
        for(; count[i]>0; (count[i]­)--)
        {
            array[j++] = i;
        }
    }
}
