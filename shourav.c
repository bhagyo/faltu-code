#include<cstdio>
using namespace std;
int a[105][105];
int arr[1005];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,count1=0;
        scanf("%d %d",&m,&n);
        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
                scanf("%d",&a[i][j]);
        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
            {
                int tmp1 = a[i][j];
                if(tmp1==-1)
                    continue;
                ///1st part
                if(arr[tmp1]==0 && i>1 && i<=m && j>1 && j<n)
                {
                    if(a[i][j]==a[i][j+1] || a[i][j]==a[i][j-1] || a[i][j]==a[i+1][j] || a[i][j]==a[i-1][j] || a[i][j]==a[i-1][j-1] || a[i][j]==a[i-1][j+1] || a[i][j]==a[i+1][j-1] || a[i][j]==a[i+1][j+1])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///2nd part
                if(i==1 && j==1)
                {
                    if(a[i][j]==a[i][j+1] || a[i][j]==a[i+1][j] || a[i][j]==a[i+1][j+1])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///3rd part
                if(arr[tmp1]==0 && i==1 && j==n)
                {
                    if(a[i][j]==a[i][j-1] || a[i][j]==a[i+1][j] || a[i][j]==a[i+1][j-1])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///4th part
                if(arr[tmp1]==0 && i==m && j==1)
                {
                    if(a[i][j]==a[i-1][j] || a[i][j]==a[i-1][j+1] || a[i][j]==a[i][j+1])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///5th part
                if(arr[tmp1]==0 && i==m && j==n)
                {
                    if(a[i][j]==a[i-1][j] || a[i][j]==a[i-1][j-1] || a[i][j]==a[i][j-1])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///6th part
                if(arr[tmp1]==0 && i>1 && i<m && j==1)
                {
                    if(a[i][j]==a[i-1][j] || a[i][j]==a[i+1][j] || a[i][j]==a[i][j+1])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///7th part
                if(arr[tmp1]==0 && i==1 && j>1 && j<n)
                {
                    if(a[i][j]==a[i][j-1] || a[i][j]==a[i][j+1] || a[i][j]==a[i+1][j])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///8th part
                if(arr[tmp1]==0 && i>1 && i<n && j==n)
                {
                    if(a[i][j]==a[i][j-1] || a[i][j]==a[i+1][j] || a[i][j]==a[i-1][j])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
                ///9th part
                if(arr[tmp1]==0 && i==m && j>1 && j<n)
                {
                    if(a[i][j]==a[i][j-1] || a[i][j]==a[i+1][j] || a[i][j]==a[i][j+1])
                    {
                        count1++;
                        arr[tmp1]=1;
                    }
                }
            }
        printf("%d\n",count1);
    }
    return 0;
}
