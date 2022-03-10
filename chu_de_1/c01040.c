#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[25];
    int k = 0;
    int i = 1;
    int sum = 0;
    while ((n/i) != 1) {
        if (n % i == 0) {
            a[k] = i;
            i++;
            k++;
        } else {
            i++;
        }
    }
    for (int j = 0; j < k; j++)
    {
        sum += a[j];
    }
    if (sum == n) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}