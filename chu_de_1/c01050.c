#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int arr[c][r];
    for (int i = 1; i <= c; i++)
    {
        
        for (int j = 1; j <= r; j++)
        {
            if (((1<i)&&(i<c))&&((1<j)&&(j<r))) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}