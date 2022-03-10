#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned long int n;
        scanf("%ld", &n);
        unsigned int demChan=0, demLe=0;
        unsigned long int p=n;
        while (p>0)
        {
            if ((p%10)%2==0)
            {
                demChan++;
            } else if ((p%10)%2==1) {
                demLe++;
            }
            p/=10;
        }
        if ((n%2==1)&&(demChan<demLe))
        {
            printf("YES\n");
        } else printf("NO\n");
    }
    return 0;
}