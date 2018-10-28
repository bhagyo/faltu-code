#include<stdio.h>

int s[12];
int f[12];
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}

int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
        scanf("%d %d",&s[i],&f[i]);

    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
/*
11
1 4
3 5
0 6
5 7
3 8
5 9
6 10
8 11
8 12
2 13
12 14
*/
