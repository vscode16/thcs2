#include <stdio.h>
int main() {
    unsigned int n;
    scanf("%d", &n);
    int n1 = n%10;
    while (n>1)
    {
        n/=10;
    }
    printf("%d %d", n, n1);
}