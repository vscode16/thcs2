#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    if (r<=c) {
        
        int m=c;
        int n=1;
        for (int i = 0; i < r; i++)
        {
            for (int j = m; j >=1 ; j--)
            {
                printf("%d", j);
            }
            m--;

            for (int k = 2; k <= n; k++)
            {
                printf("%d", k);
            }
            n++;

            printf("\n");
        }
    }
    else if (r>c) {
        int p=r;
        for (int l = 0; l < r-c; l++)
        {
            for (int y = p; y >= p-c+1; y--)
            {
                printf("%d", y);
            }
            p--;

            printf("\n");
        }
        
        int m=c;
        int n=1;
        for (int i = 0; i < c; i++)
        {
            for (int j = m; j >=1 ; j--)
            {
                printf("%d", j);
            }
            m--;

            for (int k = 2; k <= n; k++)
            {
                printf("%d", k);
            }
            n++;

            printf("\n");
        }
    }

    return 0;
}