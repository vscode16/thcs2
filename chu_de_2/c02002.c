#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int p=n-1;
    for (int i = 0; i < n; i++)
    {
        
        
            
            for (int k = 0; k < p; k++)
            {
                printf("~");
            }
            
            for (int l = p; l < n+p; l++)
            {
                printf("*");
            }
            printf("\n");
            p--;
        
        

    }
    return 0;
}