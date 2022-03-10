#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    if ((int)sqrt(m)*(int)sqrt(m)==m)
    {
        printf("%d\n", (int)sqrt(n)-(int)sqrt(m)+1);
        for (int i = (int)sqrt(m); i <= (int)sqrt(n); i++)
        {
            printf("%d\n", i*i);       
        }
    }
    else if ((int)sqrt(m)*(int)sqrt(m)!=m)
    {
        printf("%d\n", (int)sqrt(n)-(int)sqrt(m));
        for (int i = (int)sqrt(m)+1; i <= (int)sqrt(n); i++)
        {
            printf("%d\n", i*i);       
        }
    }
    return 0;
}