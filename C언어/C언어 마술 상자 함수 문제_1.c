#include <stdio.h>

int ScoreInput(int(*pinput)[3], char(*subject)[15]);
int* Average(int(*pinput)[3]);	// ��� ���ϱ�
// ��� ���� ���� 

int main(){
	int i, j;
	int input[5][3];
	int* avg; // ��� ���ϱ� 
	char subject[3][15] = {
	"Mathematics",
	"English",
	"Korean language",
	};
	ScoreInput(input, subject); // int(*parr)[3] = input; �� ���� ǥ�� 
	//avg = Average(input);
	
	printf("\n\n\n\n\n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d��° �л� %s ���� ���� : %d\n", i+1, subject[j], input[i][j]);
		}
		printf("\n--------------------------------\n\n");
	}
	
	return 0;
} 

int ScoreInput(int(*pinput)[3], char(*subject)[15]){ // input[0][0]
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d��° �л� %s ���� ����: ", i+1, subject[j]);
			scanf("%d", &pinput[i][j]);
		}
		printf("----------------------------------------\n");
	}
	return 0;
}


int* Average(int(*pinput)[3]){
	//��� ���ϱ� 
	int i, j;
	int sum[5]; // �հ� 
	static int avg[5]; 
	for(i = 0; i < 5; i++)
		for(j = 0; j < 3; j++)
			sum[i] += pinput[i][j];
	
	for(i = 0; i < 5; i++) avg[i] = sum[i] / 5;
	
	return avg;
}
