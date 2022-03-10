#include <stdio.h>
long fact(int x) {

   int c, fact = 1;
   for (c = 1; c <= x; c++) fact = fact * c;
   return fact;
}
int main() {
    int n, k=0;
    int a[6];
    long sum = 0;
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        a[k]=n%10;
        n/=10;
        k++;
    }
    for (int j = 0; j < k; j++)
    {
        sum+=fact(a[j]);
    }
    if (sum==temp) {
        printf("1");
    } else if (sum != temp) {
        printf("0");
    }
    return 0;
}