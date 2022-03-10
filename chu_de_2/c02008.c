#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int t=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if ((i>1)&&(i<n-1)&&(j>0)&&(j<t-1)) printf(".");
            else printf("*");
        }
        t++;
        printf("\n");
    }
    
    return 0;
}