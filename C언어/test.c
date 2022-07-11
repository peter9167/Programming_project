#include <stdio.h>
#include <string.h>

int main()
{
    int i, a, len, len2;
    double b;
    char s[30];
    char s1[90], s2[30];
    
    scanf("%d %lf %s", &a, &b, s);
    sprintf(s1, "%d", a);
    sprintf(s2, "%.3f", b);
    strcat(s1, s2);
    strcat(s1, s);
    len = strlen(s1);
    if(len % 2 == 0) len2 = len / 2;
    else len2 = (len / 2)+1;
    for(i = 0; i<len2; i++) printf("%c", s1[i]);
    printf("\n");
    for(; i < len; i++) printf("%c", s1[i]);
}
