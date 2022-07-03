#include <stdio.h>

int ScoreInput(int(*pinput)[3], char(*subject)[15]);
int* Average(int(*pinput)[3]);		// ��� ���ϱ�
int Average_Sort(int(*savg)[1]);	// ��� ���� ���� 

int main(){
	int i, j;
	int input[5][3];
	int(*avg)[1]; // ��� ���ϱ� 
	char subject[3][15] = {
	"Mathematics",
	"English",
	"Korean language",
	};
	ScoreInput(input, subject); // int(*parr)[3] = input; �� ���� ǥ�� 
	avg = (void*)Average(input);		// ��հ� ���ϱ� -> avg ������ ��� ���� �߰� 
	Average_Sort(avg);			// ��հ� �����ϱ� 
	
	/*printf("\n\n\n\n\n���� ����ǥ");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d��° �л� %s ���� ���� : %d\n", i+1, subject[j], input[i][j]);
		}
		printf("\n--------------------------------\n\n");
	}*/
	printf("\n\n\n\n\n��� ����ǥ\n");
	printf("-----------\n");
	for(i = 0; i < 5; i++) {
		printf("%d��° �л� ��� ���� : %d : ", (avg[i] - avg[0]) + 1, avg[i][0]);
		if(avg[i][0] > 80) 
			printf("�հ�\n");
		else 
			printf("���հ�\n");
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
	int sum[5] = {0}; // �հ� 
	static int avg[5][1]; 
	for(i = 0; i < 5; i++)
		for(j = 0; j < 3; j++)
			sum[i] += pinput[i][j];
	
	for(i = 0; i < 5; i++) avg[i][0] = sum[i] / 3;
	
	return (int*) avg;
}

int Average_Sort(int(*savg)[1]){
	int i, j, temp;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(savg[i][0] > savg[j][0]){
				temp = savg[i][0];
				savg[i][0] = savg[j][0];
				savg[j][0] = temp;
			}
		}
	}
	
	return 0;
}
