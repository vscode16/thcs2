#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int t=n-1, v=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("~");
        }
        t--;
        for (int k = 0; k < v; k++)
        {
            printf("*");
        }
        v++;
        printf("\n");
        
    }
    
    return 0;
}