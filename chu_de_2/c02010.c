#include <stdio.h>
int main() {
    int h, c;
    scanf("%d%d", &h, &c);
    if (h<=c)
    {
        int m=1, n=0;
        for (int i = 1; i <= h; i++)
        {
            
            for (int j = m; j <= c; j++)
            {
                printf("%d", j);
            }
            m++;

            
            for (int k = n; k > 0; k--)
            {
                printf("%d", k);
            }
            n++;
            
            printf("\n");
        }
        
    } else if (h>c) {
        int m=1, n=0;
        for (int i = 1; i <= c; i++)
        {
            
            for (int j = m; j <= c; j++)
            {
                printf("%d", j);
            }
            m++;

            
            for (int k = n; k > 0; k--)
            {
                printf("%d", k);
            }
            n++;
            
            printf("\n");
        }

        int p = c+1;
        for (int l = 1; l <= h-c; l++)
        {
            
            printf("%d", p);
            p++;
            for (int y = c-1; y >= 1; y--)
            {
                printf("%d", y);
            }
            printf("\n");

        }
        
    }
    
    
    return 0;
}