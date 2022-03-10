#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
    unsigned long int n;
    scanf("%lu", &n);
    int a[18], k=0;
    
    for (int i = 0; n > 0; i++)
    {
        a[k] = n % 10;
        n/=10;
        k++;
    }

    int mark = 0;
    for (int j = 0; j < k-1;j++)
    {
        if (a[j]<a[j+1]) {
            mark = 1;
            break;
        }
    }
    if (mark==0) printf("YES\n");
    else if (mark==1) printf("NO\n");
    }
    
    return 0;
}