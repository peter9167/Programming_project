#include <stdio.h>

int ScoreInput(int* input);

int main(){
	int i, j;
	int input[5][3];
	ScoreInput(&input);
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d", input[i][j]);
		}
	}
	return 0;
} 

void ScoreInput(int* input){ // input[0][0]
	int i, j, k = 0;
	char subject[3][3] = {{"����"}, {"����"}, {"����"}};
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			printf("%d��° %s ����: ", i, subject[k++]); 
			scanf("%d", &input + j);
		}
	}
}



