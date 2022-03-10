#include <stdio.h>
#include <math.h>
int main(){
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n<2)
        {
            printf("NO\n");
        }
        else
        {
            int mark = 1;
            for (int k = 2; k <= sqrt(n); k++)
            {
                if (n%k==0)
                {
                    mark = 0;
                    break;
                }
                
            }
            if (mark==1)
            {
                printf("YES\n");
            } else
            {
                printf("NO\n");
            }
            
        }
        
    }
    return 0;
}