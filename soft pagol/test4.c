#include <stdio.h>
#include <string.h>
int rev1[500],rev2[500];
int res[500];
int main()
{
    int test,i,j,k,l,len1,len2,max,m,x,y,p;
    char n1[500],n2[500];
    freopen("in713.txt","r",stdin);
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s %s",&n1,&n2);
        len1=strlen(n1);
        len2=strlen(n2);
        if(len1>len2)max=len1;
        else max=len2;
        for(j=len1; j<max; j++)strcat(n1,"0");
        for(j=len2; j<max; j++)strcat(n2,"0");
        rev1[0]=0;
        rev2[0]=0;
        l=1;
        for(j=max-1; j>=0; j--)
        {
            rev1[l]=(int)n1[j]-48;
            rev2[l]=(int)n2[j]-48;
            l++;
        }
        m=0;
        for(j=max; j>0; j--)
        {
            if(rev1[j]+rev2[j]>=10)
            {

                res[m]=(rev1[j]+rev2[j])%10;
                m++;
                rev1[j-1]+=(rev1[j]+rev2[j])/10;
            }
            else
            {
                res[m]=(rev1[j]+rev2[j]);
                m++;

            }

        }
        if(rev1[0]+rev2[0])
        {
            res[m]=(rev1[j]+rev2[j]);
            m++;

        }
        for(x=0; x<m; x++)
            if(res[x]!=0)break;
        for(y=x; y<m; y++)
            printf("%d",res[y]);
        printf("\n");
        for(p=0; p<500; p++)
        {
            res[p]=0;
            rev1[p]=0;
            rev2[p]=0;
        }
    }



    return 0;
}
