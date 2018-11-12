#include<bits/stdc++.h>
using namespace std;
class division
{
public:
    char name[15];
    int point;
};

division arr[9];
float mat[9][9];
int main()
{
    freopen("input.txt","r",stdin);
    char div1[15],div2[15];
    int i,j,k,m,n,loc1,loc2,loop,to;
    for(i=1; i<=8; i++)
    {
        cin>>arr[i].name;
        cin>>arr[i].point;
    }
    for(i=1;i<=8;i++)
        for(j=1;j<=8;j++)
            cin>>mat[i][j];
    for (k = 1; k <=8; k++)
        for (i = 1; i <=8; i++)
            for (j = 1; j <= 8; j++)
                if (mat[i][k] + mat[k][j] < mat[i][j])
                    mat[i][j] = mat[i][k] + mat[k][j];
    cin>>loop;
    for(m=1;m<=loop;m++)
    {
        loc1=loc2=-1;
        scanf("%s %s",div1,div2);
        for(i=1; i<=8; i++)
            if(strcmp(div1,arr[i].name)==0)
                loc1=arr[i].point;
        for(i=1; i<=8; i++)
            if(strcmp(div2,arr[i].name)==0)
                loc2=arr[i].point;
        if(loc1==-1 ||   loc2==-1) printf("not found\n");
        else printf("%s theke ditance %s er jonno %f\n",div1,div2,mat[loc1][loc2]);
    }
    return 0;
}
