#include <stdio.h>
#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#define max(a,b)            (((a)>(b))? (a) : (b))
#endif
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int t=97;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            int minDis = min(i-1,j-1);
            printf("%c", max(r,c)+96-minDis);
        }
        printf("\n");
    }
    


    return 0;
}