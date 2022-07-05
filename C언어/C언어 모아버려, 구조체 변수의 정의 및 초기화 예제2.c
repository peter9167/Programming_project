#include <stdio.h>

void Print_Status(struct HUMAN human);

struct HUMAN {
  // HUMAN ����ü�� �Ʒ��� ���� 4 ���� int �� ������� ������ �ִ�.
  int age;
  int height;
  int weight;
  int gender;
}; //  Adam = {31, 182, 75, 0}, Eve = {27, 166, 48, 1};

int main() {
  struct HUMAN Adam = {31, 182, 75, 0}; // main ���ο��� ���� ���� Adam �� Eve �� �����Ͽ� = {} �� ���ؼ� 
                                        // �߰�ȣ ������ �������� ���������� �� ����� ����
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
