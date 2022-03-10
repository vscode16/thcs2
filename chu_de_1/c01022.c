#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		int sum = 0;
		while (n>0)
		{
			sum += (n % 10);
			n /= 10;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}