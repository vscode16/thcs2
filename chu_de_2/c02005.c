#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int arr[b], t=0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("~");
        }
        for (int k = 0; k < b; k++)
        {
            if((i>0)&&(i<a-1)&&(k>0)&&(k<b-1)) printf(".");
            else printf("*");
        }
        t++;
        printf("\n");
        
    }
    

    return 0;
}