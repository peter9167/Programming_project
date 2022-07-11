#include <stdio.h>
#include <string.h>

typedef struct _Health {
  /* 이름 */
  char name[5];
  /* 키 */
  int height;
  /* 몸무게 */
  double weight;
} Health;

void strsort(char* h);

int main()
{
    Health h[5];
    int i, j;
    char tmp[5];
    for(i = 0; i < 5; i++)
    	scanf("%s %d %lf", h[i].name, &h[i].height, &h[i].weight);
    
    for (i = 0; i < 5; i++) {
	    for (j = 0; j < 5 - 1 - i; j++) {
	        if (strcmp(h[j].name, h[j + 1].name) > 0) {
	            tmp[j] = *h[j].name;
	            *h[j].name = *h[j + 1].name;
	            *h[j + 1].name = tmp[i];
	        }
	    }
	}
    
    printf("name\n");
    for(i = 0; i < 5; i++)
    	printf("%s %d %.1f\n", h[i].name, h[i].height, h[i].weight);
}

