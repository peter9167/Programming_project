#include <stdio.h>

struct employee { 
  // int ���� age �� salary ���� �� �� ��� ���� 
  int age;
  int salary;
};

struct company {
  struct employee data;
  // ����ü�� int �� char �� ���� �ϳ��� ��(type) �̴�.
  // struct employee �� Ÿ���� data ��� (����ü) ������ ����. 
  // int a �� ������ �Ȱ��� �۾�
  char name[10];
};

int main() {
  struct company Kim; // struct company ���� ���� Kim ����

  Kim.data.age = 31; // Kim �� data ����� age ��� �� 31 �� �� ���� 
  Kim.data.salary = 3000000; // ���� ���� 

  printf("Kim's age : %d \n", Kim.data.age); // Kim's age : 31 
  printf("Kim's salary : %d$/year \n", Kim.data.salary); // Kim's salary : 3000000$/year

  return 0;
}
