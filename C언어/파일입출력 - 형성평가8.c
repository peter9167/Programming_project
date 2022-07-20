#include <stdio.h>
#include <stdlib.h>

void Sort(double* avg, int n);

int main(void)
{
	int n, i, j;
	int **a;
	int *sum;
	double *avg;
	fscanf(stdin, "%d", &n);
	
	a = (int**)malloc(n * sizeof(int*));
	for(i = 0; i < n; i++)
		a[i] = (int*)malloc(3*sizeof(int));
	
	sum = (int*)malloc(n * sizeof(int));
	avg = (double*)malloc(n * sizeof(double));
	for(i = 0; i < n; i++) {
		sum[i] = 0;
		avg[i] = 0;
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
			fscanf(stdin, "%d", &a[i][j]);
			sum[i] += a[i][j];
		}
		avg[i] = (double)sum[i] / 3;
	}
	
	Sort(avg, n);
	
	for(i = 0; i < n; i++){
		fprintf(stdout, "%.1f\n", avg[i]);
	}
}

void Sort(double* avg, int n){
	int i, j;
	double tmp;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(avg[i] < avg[j]){
				tmp = avg[i];
				avg[i] = avg[j];
				avg[j] = tmp;
			}
		}
	}
}


