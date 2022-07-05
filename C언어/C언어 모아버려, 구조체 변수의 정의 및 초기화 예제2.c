#include <stdio.h>

void Print_Status(struct HUMAN human);

struct HUMAN {
  // HUMAN 구조체는 아래와 같이 4 개의 int 형 멤버들을 가지고 있다.
  int age;
  int height;
  int weight;
  int gender;
}; //  Adam = {31, 182, 75, 0}, Eve = {27, 166, 48, 1};

int main() {
  struct HUMAN Adam = {31, 182, 75, 0}; // main 내부에서 위와 같이 Adam 과 Eve 를 정의하여 = {} 를 통해서 
                                        // 중괄호 내부의 정보들이 순차적으로 각 멤버에 대입
  struct HUMAN Eve = {27, 166, 48, 1};

  Print_Status(Adam);
  Print_Status(Eve);
  
  return 0;
}

void Print_Status(struct HUMAN human) {
  if (human.gender == 0) {
    printf("MALE \n");
  } else {
    printf("FEMALE \n");
  }

  printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height, human.weight);

  if (human.gender == 0 && human.height >= 180) {
    printf("HE IS A WINNER!! \n");
  } else if (human.gender == 0 && human.height < 180) {
    printf("HE IS A LOSER!! \n");
  }

  printf("------------------------------------------- \n");
}
