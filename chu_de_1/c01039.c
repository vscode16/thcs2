#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int c = 0;
    while (n > 0)
    {
        n/=10;
        c++;
    }
    printf("%d", c);
    
}