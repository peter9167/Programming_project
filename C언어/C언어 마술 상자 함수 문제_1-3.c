#include <stdio.h>

int ScoreInput(int(*pinput)[4], char(*subject)[15]);
int* Average(int(*pinput)[4]);		// ��� ���ϱ�
int Average_Sort(int* avg);	// ��� ���� ���� 

int main(){
	int i, j;
	int input[5][4];
	int* avg; // ��� ���ϱ� 
	char subject[3][15] = {
	"Mathematics",
	"English",
	"Korean language",
	};
	for(i = 0; i < 5; i++) input[i][0] = i+1;
	ScoreInput(input, subject); // int(*parr)[3] = input; �� ���� ǥ�� 
	avg = Average(input);		// ��հ� ���ϱ� -> avg ������ ��� ���� �߰� 
	Average_Sort(avg);			// ��հ� �����ϱ� 
	
	/*printf("\n\n\n\n\n���� ����ǥ");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d��° �л� %s ���� ���� : %d\n", i+1, subject[j], input[i][j]);
		}
		printf("\n--------------------------------\n\n");
	}*/
	puts("\n\n\n\n\n");
	puts("-----------\n");
	puts("��� ����ǥ\n");
	puts("-----------\n");
	for(i = 0; i < 5; i++) {
		printf("%d��° �л� ��� ���� : %d : ", input[i][0], avg[i]);
		if(avg[i] > 80) 
			printf("�հ�\n");
		else 
			printf("���հ�\n");
	}
	
	return 0;
} 

int ScoreInput(int(*pinput)[4], char(*subject)[15]){ // input[0][0]
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 1; j < 4; j++){
			printf("%d��° �л� %s ���� ����: ", i+1, subject[j]);
			scanf("%d", &pinput[i][j]);
		}
		printf("----------------------------------------\n");
	}
	return 0;
}


int* Average(int(*pinput)[4]){
	//��� ���ϱ� 
	int i, j;
	int sum[5] = {0}; // �հ� 
	static int avg[5]; 
	for(i = 0; i < 5; i++)
		for(j = 1; j < 4; j++)
			sum[i] += pinput[i][j];
	
	for(i = 0; i < 5; i++) avg[i] = sum[i] / 3;
	
	return avg;
}

int Average_Sort(int* savg){
	int i, j, temp;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(savg[i] > savg[j]){
				temp = savg[i];
				savg[i] = savg[j];
				savg[j] = temp;
			}
		}
	}
	
	return 0;
}
