#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k, sum = 0;0;
    int a[9];
    while (n>0)
    {
        a[k]=n%10;
        n/=10;
        k++;
    }
    for (int j = k-2; j >0; j--)
    {
        sum+=a[j]*(int)pow(10,j);
    }
    printf("%d", sum+a[0]*(int)pow(10,k-1)+a[k-1]);
    return 0;
}