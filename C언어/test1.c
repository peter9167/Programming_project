#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];
	char max[100];
	
	fgets(s, 100, stdin);
	fprintf(stdout, "%d\n", strlen(s));
	
	char *ptr = strtok(s, " ");
	strcpy(max, s);
	
    while (ptr != NULL)
    {
    	if(strlen(max) < strlen(ptr)){
    		strcpy(max, ptr);
		}
        ptr = strtok(NULL, " ");
    }
    printf("%s\n", max);

    return 0;
}


