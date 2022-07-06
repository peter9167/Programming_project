#include <stdio.h>
#include <string.h>
#include <stdlib.h> 


int main()
{
    char a[20];
    int i;
    
    for(i = 0; i < 20; i++){
    	scanf("%s", a);
    	printf("%s", a);
    	if(strcmp(a, "END")) break;
	}
}
