#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[9], k=0;
    while (n > 0)
    {
        a[k]=n%10;
        n/=10;
        k++;
    }
    int count1=0, count2=0;
    for (int i = 0; i < k; i++)
    {
        if(a[i]%2==0) {
            count1++;
        } else if (a[i]%2==1) {
            count2++;
        }
    }
    printf("%d %d", count2, count1);
    return 0;
}