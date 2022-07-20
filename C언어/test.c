#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, i;
	char a[10][100];
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		fgets(a[i], 100, stdin);
	for(; i > n; i--)
		fputs(a[i], stdout); printf("\n");
}
