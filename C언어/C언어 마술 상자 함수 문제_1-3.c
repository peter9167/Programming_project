#include <stdio.h>

int ScoreInput(int(*pinput)[4], char(*subject)[15]);
int* Average(int(*pinput)[4]);		// 평균 구하기
int Average_Sort(int* avg);	// 평균 점수 정렬 

int main(){
	int i, j;
	int input[5][4];
	int* avg; // 평균 구하기 
	char subject[3][15] = {
	"Mathematics",
	"English",
	"Korean language",
	};
	for(i = 0; i < 5; i++) input[i][0] = i+1;
	ScoreInput(input, subject); // int(*parr)[3] = input; 과 같은 표현 
	avg = Average(input);		// 평균값 구하기 -> avg 변수에 평균 점수 추가 
	Average_Sort(avg);			// 평균값 정렬하기 
	
	/*printf("\n\n\n\n\n과목 점수표");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d번째 학생 %s 과목 점수 : %d\n", i+1, subject[j], input[i][j]);
		}
		printf("\n--------------------------------\n\n");
	}*/
	puts("\n\n\n\n\n");
	puts("-----------\n");
	puts("평균 점수표\n");
	puts("-----------\n");
	for(i = 0; i < 5; i++) {
		printf("%d번째 학생 평균 점수 : %d : ", input[i][0], avg[i]);
		if(avg[i] > 80) 
			printf("합격\n");
		else 
			printf("불합격\n");
	}
	
	return 0;
} 

int ScoreInput(int(*pinput)[4], char(*subject)[15]){ // input[0][0]
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 1; j < 4; j++){
			printf("%d번째 학생 %s 과목 점수: ", i+1, subject[j]);
			scanf("%d", &pinput[i][j]);
		}
		printf("----------------------------------------\n");
	}
	return 0;
}


int* Average(int(*pinput)[4]){
	//평균 구하기 
	int i, j;
	int sum[5] = {0}; // 합계 
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
