/******   HAREE KRISHNA   *******/
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
#define squre(x) x*x
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MAX3(x,y,z) (x>y)?((x>z)?x:z):((y>z)?((y>x)?y:x):z)
#define MIN3(x,y,z) (x<y)?((x<z)?x:z):((y<z)?((y<x)?y:x):z)
#define FOR(i,cases) for(i=0;i<cases;i++)
#define FOR1(i,cases) for(i=1;i<=cases;i++)
#define size 199999
/******   start your code   *******/

int main()
{
    LF x1,y1,x2,y2,x3,y3,gx,fy,store1,store2,save,val,rad,dif,x_cen,y_cen,constant;
    C ch1,ch2,ch3;
    while(sf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        store1=(squre(x2)+squre(y2)-squre(x1)-squre(y1))/2.0;
        store2=(squre(x3)+squre(y3)-squre(x2)-squre(y2))/2.0;
        save=((x2-x1)*(y3-y2))-((x3-x2)*(y2-y1));
        x_cen=(((y2-y1)*store2)-((y3-y2)*store1))/save;
        y_cen=(((x2-x1)*store2)-((x3-x2)*store1))/save;
        gx=-x_cen;
        fy=-y_cen;
        constant=-(squre(x1)+squre(y1)+2*x_cen*x1+2*y_cen*y1);
        rad=sqrt(squre(x_cen)+squre(y_cen)-constant);
        if(x_cen>0)
            ch1='+';
        else if(x_cen==0)
            ch1='+';
        else if(x_cen<0)
        {
            x_cen=-x_cen;
            ch1='-';
        }
        if(y_cen>0)
            ch2='+';
        else if(y_cen==0)
            ch2='+';
        else if(y_cen<0)
        {
            y_cen=-y_cen;
            ch2='-';
        }
        pf("(x %c %0.3lf)^2 + (y %c %0.3lf)^2 = %0.3lf^2\n",ch1,x_cen,ch2,y_cen,rad);
        pf("x^2 + y^2 ");
        if(gx!=0)
        {
            if(gx>0.0)
                ch1='-';
            else
            {
                ch1='+';
                gx=-gx;
            }
            pf("%c %0.3lfx ",ch1,2.0*gx);
        }
        if(fy!=0)
        {
            if(fy>0.0)
                ch1='-';
            else
            {
                ch1='+';
                fy=-fy;
            }
            pf("%c %0.3lfy ",ch1,2.0*fy);
        }
        dif=squre(x_cen)+squre(y_cen)-squre(rad);
        if(dif!=0)
        {
            if(dif>0.0)
                ch1='+';
            else
            {
                ch1='-';
                dif=-dif;
            }
            pf("%c %0.3lf ",ch1,dif);
        }
        pf("= 0\n");
    }
    return 0;
}
