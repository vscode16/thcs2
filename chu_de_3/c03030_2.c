#include <stdio.h>
#include <math.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a=pow(10,n-1), b=pow(10,n);
        for (int i = a; i < b; i++)
        {
            int mark=1, p=i;
            while (p>=10)
            {
                int r=p%10;
                if(r<(p/10)%10) {
                    mark=0;
                    break;
                } else {
                    p/=10;
                }   
            }
            if (mark)
            {
                printf("%d ", i);
            }        
        }
        printf("\b");
        printf("\n");
    }
    return 0;
}