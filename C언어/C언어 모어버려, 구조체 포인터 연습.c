#include <stdio.h>
#include <string.h>

struct test {
  char name[5];
  int age;
};

int main() {
  struct test st;
  struct test *ptr;
  
  ptr = &st;
  
  // ptr->name[5] = "Kim"; // ���ڿ��� �ʱ�ȭ�� �����ϰ�� "����" ���� ������ �ȵȴ�.
  strcpy_s(ptr->name, 5, "Kim"); // ststrcpy_s(���ڿ��� ������ ����, ������ ũ��, ������ ���� ���ڿ�) 
  ptr->age = 10;
  
  printf("st �� name ��� : %s \n", st.name);
  printf("st �� age ��� : %d \n", st.age);
  
  return 0;
}
