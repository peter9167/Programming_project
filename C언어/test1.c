#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[100];
	
	fgets(s, 100, stdin);
	printf("%s", s);
}


