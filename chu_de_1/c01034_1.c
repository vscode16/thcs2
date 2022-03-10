#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m, n;
    
    scanf("%d%d", &m, &n);
    printf("%d\n", (int)floor(sqrt(n))-(int)ceil(sqrt(m))+1);
    for (int i = (int)ceil(sqrt(m)); i <= (int)floor(sqrt(n)); i++)
    {
        
        printf("%d\n", i*i);
        
    }
    return 0;
}