#include <stdio.h>

struct TEST {
  int age;
  int gender;
  char name[20];
};

int set_human(struct TEST *a, int age, int gender, const char *name); // TEST ����ü ��ü ���� �Լ� ����

char copy_str(char *dest, const char *src); // string copy �Լ����� = strcpy �Լ��� ��� ����

int main() {
  struct TEST human; // TEST ����ü ���� ����

  set_human(&human, 10, 1, "Lee"); // set_human �Լ��� TEST ����ü ���� �ּҰ�, 10, 1, "Lee" ����

  printf("AGE : %d // Gender : %d // Name : %s \n", human.age, human.gender, human.name);
  return 0;
}

int set_human(struct TEST *a, int age, int gender, const char *name) {
  a->age = age; // ����1�� ���� ������ ����
  a->gender = gender; // ���� ����
  copy_str(a->name, name); // copy_str �Լ��� TEST ����ü name ��ü�� main���� ���޵� name �� ����

  return 0;
}

char copy_str(char *dest, const char *src) {
  while (*src) {	// ���޵� �迭(���ڿ�) ������ŭ ����
    *dest = *src;	// *src = src[0] = a.name[0] = human.name[0]
    //printf("%c ", src[0]); // 1�� : L, 2�� : e, 3�� : e 
    src++; // src[0] += 1 �� �Ͽ� �޸� ��ġ char byte ��ŭ 1����(src[1] �� ����)
    dest++; // ���� ���� 
  }

  *dest = '\0'; // ���ڿ� ������ �޸� �ּҿ� '\0' ���� 

  return 0;  
}
