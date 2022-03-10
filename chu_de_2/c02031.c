#include <stdio.h>
int main() {
    int h;
    scanf("%d", &h);
    for (int i = 1; i <= h-1; i++)
    {
        for (int j = 1; j <= h-i+1; j++)
        {
            printf("%c", 64+h-i+j-1);
        }
        printf("\n");
    }
    printf("@");
    return 0;
}