#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int n=c;
    int m = 1;
    for (int i = 0; i < r; i++)
    {
        
        for (int j = m; j >= m-c+1; j--)
        {
            if (j<=0) continue;
            printf("%d", j);
        }
        m++;

        
        for (int k = 2; k <= n; k++)
        {
            printf("%d", k);
        }
        n--;
        printf("\n");
    }
    
    return 0;
}