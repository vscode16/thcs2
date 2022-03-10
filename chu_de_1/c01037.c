#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = 0;
    if ((a<0)||(b<0))
    {
        printf("so khong hop le");
    }
    else if (a<b)
    {
    for (int i = a; i <= b; i++)
    {
        sum+=i;
    }
    printf("%d", sum);
    }
    else if (a>b)
    {
        for (int i = b; i <= a; i++)
    {
        sum+=i;
    }
    printf("%d", sum);
    }
    return 0;
}