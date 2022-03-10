#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int y=0;y<t;y++)
    {
        int n, i;
        int a[8];
        int k=0;
        int count =0;
        scanf("%d", &n);
        for (i=2;n!=1;)
        {
            if ((n%i)==0)
            {
                a[k]=i;
                n=n/i;
                i=2;
                k=k+1;
                count=count+1;
            }
            else
            {
                i++;
            }
        }
        for (int j = 0; j < count; j++)
        {
            printf("%d ", a[j]);
        }       
        printf("\b\n");
    }
    return 0;    
}