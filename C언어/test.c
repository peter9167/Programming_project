#include <stdio.h>

typedef struct
{
    char name[20];
    int a, b, c;
}Result;


int main()
{
    Result r;
    int x;
    float y;
    
	scanf("%d %f %d %f", &f.x, &f.y, &f.x2, &f.y2);
    
    x = ((f.x + f.x2) / 2) + 5;
    y = ((f.y + f.y2) / 2) - 4.5;
    
    printf("height : %dcm\n", x);
    printf("weight : %.1fkg\n", y);
}
