#include<stdio.h>
#include<string.h>
char grid[101][101],ch;
int main()
{
    int i,j,k,l,ck,row,col,cases=0;
    while(scanf("%d %d%c",&row,&col,&ch)==3&&row!=0&&col!=0)
    {
        if(cases)
            printf("\n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                ch=getchar();
                if(ch=='*')
                    grid[i][j]=ch;
                else
                    grid[i][j]=48;
            }
            getchar();
        }
        for(i=0; i<row; i++)
            for(j=0; j<col; j++)
            {
                if(grid[i][j]=='*')
                    continue;
                if(j-1>=0 && grid[i][j-1]=='*')//for left position
                    grid[i][j]++;

                if(j+1<col && grid[i][j+1]=='*')//for right position
                    grid[i][j]++;

                if(i-1>=0 && grid[i-1][j]=='*')//for upper position
                    grid[i][j]++;

                if(i+1<row && grid[i+1][j]=='*')//for lower position
                    grid[i][j]++;

                if(i-1>=0 && j-1>=0 && grid[i-1][j-1]=='*')//for upper left position
                    grid[i][j]++;

                if(i-1>=0 && j+1<col && grid[i-1][j+1]=='*')//for upper right position
                    grid[i][j]++;

                if(i+1<row && j-1>=0 && grid[i+1][j-1]=='*' )//for lower left position
                    grid[i][j]++;

                if(i+1<row && j+1<col && grid[i+1][j+1]=='*' )//for lower right position
                    grid[i][j]++;
            }
        printf("Field #%d:\n",++cases);
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
                printf("%c",grid[i][j]);
            printf("\n");
        }
    }
    return 0;
}
