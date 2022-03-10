#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int p=n-1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        
        
            
            for (int k = 0; k < p; k++)
            {
                printf("~");
            }
            
            for (int l = p; l < n+p; l++)
            {
                if ((l>p&&l<n+p-1)&&((i>0)&&(i<n-1))) printf(".");
                else printf("*");
            }
            p--;
            printf("\n");
    }
    return 0;
}