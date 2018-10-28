#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
typedef char C;
int a,b,d,e,g,h,i,j,k,l,m,n,o,p,q,r,s,t,v,w,x,y,z;
int A,B,D,E,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,V,W,X,Y,Z;
#define sf scanf
#define pf printf
#define wh while
#define PI 2*acos(0.0)
///#define MAX 1999999
#define MAX 202

/******   start your code   *******/

int arra[100];
int *bubble_sort(int arr[],int n);
int main()
{
    int len,ck;
    sf("%d",&len);
    for(i=0;i<len;i++)
        sf("%d",&arra[i]);
    bubble_sort(arra,len);
    for(i=0;i<len;i++)
        pf("%d ",arra[i]);
    return 0;
}
int *bubble_sort(int arr[],int n)
{
    int temp;
    for(i=0;arr[i]-1;i++)
        for(j=i+1;arr[j];j++)
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    return arr;
}

