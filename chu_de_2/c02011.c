#include <stdio.h>
int main() {
    int h, c;
    scanf("%d%d", &h, &c);
    if (h<=c) {
        int m=1, n=c-1;
        for (int i = 1; i <= h; i++)
        {
            
            for (int j = m; j <= c; j++)
            {
                printf("%d", j);
            }
            m++;

            
            for (int k = c-1; k > n; k--)
            {
                printf("%d", k);
            }
            n--;
            
            printf("\n");
        }
    } else if (h>c) {
        int m=1, n=c-1;
        for (int i = 1; i <= c; i++)
        {
            
            for (int j = m; j <= c; j++)
            {
                printf("%d", j);
            }
            m++;

            
            for (int k = c-1; k > n; k--)
            {
                printf("%d", k);
            }
            n--;
            
            printf("\n");
        }
        
        int p = c+1;
        for (int l = 1; l <= h-c; l++)
        {
            for (int y = p; y > p-c; y--)
            {
                printf("%d", y);
            }
            p++;
            printf("\n");


        }
    }    
}