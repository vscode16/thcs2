#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int a[r][c];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i+j)<c)
            {
                a[i][j]=i+j+1;
            }
            
        }    
    }

    int t=1;
    for (int k = c-1; k >= 0; k--)
    {        
        for (int l = t; l < r; l++)
        {
            a[l][k]=t;
        }
        t++;
    }
    
    for (int m = 0; m < r; m++)
    {
        for (int n = 0; n < c; n++)
        {
            printf("%c", a[m][n]+64);
        }
        printf("\n");
    }
    
    return 0;
}