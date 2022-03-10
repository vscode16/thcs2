#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n; j++)
        {
            if (((1<i)&&(i<n))&&((1<j)&&(j<n))) printf(".");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}