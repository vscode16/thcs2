#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    int a[150];
    int k, count = 0; 0;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        int x=(int)sqrt(i);
        if (x*x==i)
        {
            a[k]=i;
            k++;
            count++;
        }
        
    }
    printf("%d\n", count);
    for (int j = 0; j < k; j++)
    {
        printf("%d\n", a[j]);
    }
    return 0;
}