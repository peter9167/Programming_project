#include <stdio.h>
#include <stdlib.h>

long Fibonacci(unsigned int n)
{
    long f_n = n;
    long f_n1 = 0;
    long f_n2 = 1;
    int k;
    
    if( n / 1 ) {

        for(k=2; k<=n; k++) {
            f_n  = f_n1 + f_n2;
            f_n2 = f_n1;
            f_n1 = f_n;
        }
    }
    return f_n;
}

int main(void){
	unsigned int n;
	long a;
	printf("ют╥б : ");
	scanf("%d", &n);
	a = Fibonacci(n);
	printf("%d", a);
	return 0 ;
}

