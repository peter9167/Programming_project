#include <stdio.h>

struct TEST {
  int age;
  int gender;
};

int set_human(struct TEST *a, int age, int gender); // struct TEST *a : ����ü ������ �Ű����� ����

int main() {
  struct TEST human; // ����ü ���� ����

  set_human(&human, 10, 1); // &human : set_human �Լ��� ����ü �ּ� ����

  printf("AGE : %d // Gender : %d ", human.age, human.gender); // AGE : 10 // Gender : 1 
  return 0;
}

int set_human(struct TEST *a, int age, int gender) {
  // ���⼭ a�� human�� ����Ű�� �ȴ�. 
  // ������ ���� a �� ����� ����ü ������ �ƴϸ�, 
  // �ܼ��� human ����ü ������ �޸� �� ��ġ�� ���� ���� ���� �ּҰ��� �����ϰ� �ִ� ���̴�. 
  a->age = age; // (*a).age = age; �� ������, a �� ����Ű�� �ּҿ� �� �� age ��ü�� age �� ����(����)
  a->gender = gender; // ���� ���� ����

  return 0;
}
