#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min =a ;
    min=(a>b)?((b<c)?b:c):((a>c)?c:a);
    printf("%d", min);
    return 0;
}