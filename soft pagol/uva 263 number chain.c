#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned long long int LLU;
typedef unsigned long int LU;
typedef unsigned int U;
typedef char C;
#define sf scanf
#define pf printf
#define wh while
#define PI acos(-1.0)
#define size 105
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

/******   start your code   *******/

void rev_string(C str1[],int n)/*reversing string*/
{
    C temp;
    int i=0,j=n;
    while(i<j/2)
    {
        temp=str1[i];
        str1[i]=str1[j-i-1];
        str1[j-i-1]=temp;
        i++;
    }
}
void bubble_sort(C str1[],int len)/*arrange digits in ascending order*/
{
    int i,j;
    C temp;
    for(i=0; i<len-1; i++)
        for(j=i+1; j<len; j++)
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
}
C str3[11],str1[11],str2[11],fake[11];
LLD stock[1010];

int main()
{
    LLD i,m,l,s,len;
    LLD ck_val,ckk,ck,save,store,num1,num2,num3,num;
    while(sf("%lld",&num)==1)
    {
        if(num==0)
            break;
        pf("Original number was %lld\n",num);
        /*if(num<10)
        {
            pf("%lld - %lld = 0\n",num,num);
            pf("0 - 0 = 0\n");
            pf("Chain length 2\n\n");
            continue;
        }*/
        i=0;
        while(num!=0)/* integer to string*/
        {
            str1[i++]=48+num%10;
            num/=10;
        }
        str1[i]='\0';
        ck_val=-5;/*just for nothing,just assigned the value*/
        l=ckk=0;
        for(m=1;; m++)
        {
            len=strlen(str1);
            bubble_sort(str1,len);/* for getting the smaller num*/
            strcpy(str2,str1);/* for getting the smaller string to str2*/
            rev_string(str1,len);/* for getting the bigger num*/
            strcpy(str3,str1);/* for getting the bigger string to str3*/
            num2=atoi(str2);/* for getting the smaller number from str2*/
            num3=atoi(str3);/* for getting the bigger number from str3*/
            store=num3-num2;
            pf("%lld - %lld = %lld\n",num3,num2,store);
            if(store==ck_val)/*if it's earlier number is same*/
                break;
            ck_val=store;
            stock[l++]=store;
            if(m>1)/*for avoiding first iteration */
                for(s=0; s<l-1; s++)
                    if(store==stock[s])
                    {
                        ckk=1;
                        break;
                    }
            if(ckk==1)
                break;
            strcpy(str1,fake);/*for make it empty */
            ck=0;
            while(store!=0)/* integer to string*/
            {
                str1[ck++]=48+store%10;
                store/=10;
            }
            str1[ck]='\0';
        }
        pf("Chain length %lld\n\n",m);
    }
    return 0;
}
