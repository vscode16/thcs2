#include <stdio.h>
#include <stdlib.h>

int check(int x) {
    if (x==0||x==8||x==9)
    {
        return 0;
    } else if (x==1)
    {
        return 1;
    }
        
    return 2;
}

int main() {
    unsigned long int n;
    int arr[18], k=0, mark =1, a;
    scanf("%ld", &n);
    while (n>0)
    {
        a=n%10;
        if (check(a)==0)
        {
            arr[k]=0;
        } else if (check(a)==1)
        {
            arr[k]=1;
        } else if (check(a)==2)
        {
            mark=0;
            break;
        }
        n/=10;
        k++;
    }

    if (mark==0)
    {
        printf("INVALID");
    } else
    {
        for (int i = k-1; i >=0; i--)
        {
            if (arr[i]==0)
            {
                continue;
            } else
            {
                printf("%d", arr[i]);
            }
            
            
        }
    }
    return 0;
}