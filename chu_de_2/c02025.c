#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)        {
            
            if (i+j<=c)
            {
                if (i==1&&j==1)
                {
                    printf("@");
                }
                
                else printf("%c", i+j-2+64);
                
            } else printf("%c", c-1+64);
            
        }
        printf("\n");
    }
    
}