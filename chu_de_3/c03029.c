#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int n;
        scanf("%ld", &n);
        int p=n, mark=1;
        while (n>0)
        {
            int m=n%10;
            if (m%2==1)
            {
                mark=0;
                break;
            }
            n/=10;
            
        }
        if ((p%2==0)&&(mark==1))
        {
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}