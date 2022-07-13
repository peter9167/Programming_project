#include <stdio.h>

typedef struct
{
    char name[20];
    int a, b, c;
    int sum;
}Result;


int main()
{
    Result r[10];
    int n;
    scanf("%d", &n);
    
    int i, j;
    int sum[10];
	for(i=0;i<n;i++){
        scanf("%s %d %d %d",
        r[i].name, &r[i].a, &r[i].b, &r[i].c);
        r[i].sum = r[i].a+r[i].b+r[i].c;
    }
	
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(r[i].sum < r[j].sum){
				Result tmp = r[i];
				r[i] = r[j];
				r[j] = tmp;
			}
		}
	}
	
	for(i = 0; i < n; i++) {
		printf("%s %d %d %d %d\n", r[i].name, r[i].a, r[i].b, r[i].c, r[i].sum);
	}
}
