#include<stdio.h>
int main() {
    int t;
    int count =1, a=1;
    scanf("%d", &t);
    while (t--)
    {
    int n;
    scanf("%d", &n);
    if (n%2==0)
    {
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i==0)
        {
            
            if (i%2==0)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    } else printf("%d\n", 0);
    }
    return 0;
}