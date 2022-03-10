#include <stdio.h>
int main(){
    int t, n, n1, n2;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n<10)
        {
            printf("so khong hop le");
        } else {
            n1=n%10;
            while (n>9)
            {
                n2=(n/=10);
            }
            if (n1==n2)
            {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
            
        }
        
    }
    

    return 0;
}