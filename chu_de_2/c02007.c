#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int t=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("*");
        }
        t++;
        printf("\n");
    }
    
    return 0;
}