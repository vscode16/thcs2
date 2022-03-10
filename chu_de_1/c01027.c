#include <stdio.h>
int main()
{
    int a, b, i, k, n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
    
    
    scanf("%d %d", &a, &b);
    if (a<=b)
    {
        for (i = a; i > 0; i--)
        {
            if ((a%i)==0 && (b%i)==0)
            {
                break;
            }
            
        }
        printf("%d\n", i);
    }
    else if (a>=b)
    {
        for (k = b; k > 0; k--)
        {
            if ((b%k)==0 && (a%k)==0)
            {
                break;
            }
            
        }
        printf("%d\n", k);
    }
    }
    return 0;
    
}