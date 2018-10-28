#include<stdio.h>
int main()
{
    int i,j,k,l,sum,row_1,colum_1,row_2,colum_2;
    int a[5][5],b[5][5],c[5][5];
    scanf("%d %d",&row_1,&colum_1);
    scanf("%d %d",&row_2,&colum_2);
    if(colum_1!=row_2)
        printf("Can't be solved.\n");
    else
    {
        for(i=0; i<row_1; i ++)/// Matrix A
            for(j=0; j<colum_1; j++)
                scanf("%d",&a[i][j]);
        printf("Matrix A:\n");
        for(i=0; i<row_1; i++)
        {
            for(j=0; j<colum_1; j++)
                printf("\t%d",a[i][j]);
            printf("\n");
        }
        for(i=0; i<row_2; i++)/// Matrix B
            for(j=0; j<colum_2; j++)
                scanf("%d",&b[i][j]);
        printf("Matrix B:\n");
        for(i=0; i<row_2; i++)
        {
            for(j=0; j<colum_2; j++)
                printf("\t%d",b[i][j]);
            printf("\n");
        }
        for(i=0; i<row_1; i++)
            for(j=0; j<colum_1; j++)
            {
                sum=0;
                for(k=0; k<row_2; k++)
                    sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
                printf("\n%d\t",c[i][j]);
            }
        printf("Matrix C:\n");
        for(i=0; i<row_1; i++)
        {
            for(j=0; j<colum_2; j++)
                printf("\t%d",c[i][j]);
            printf("\n");
        }
    }
    return 0;
}
