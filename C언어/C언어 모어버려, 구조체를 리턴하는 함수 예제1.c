/* ����ü�� �����ϴ� �Լ� */
#include <stdio.h>

struct AA function(int j); //  "struct AA" ���� �����ϴ� �Լ� function �̴�.  

struct AA { // AA ��� ����ü ���� 
  int i;
};

int main() {
  struct AA a;
  
  // truct AA ���� �����ϱ� ������ �����ϴ� ���� struct AA ���� ���̴�.  
  a = function(10);
  printf("a.i : %d \n", a.i); // a.i : 10

  return 0;
}

struct AA function(int j) {
  //  "struct AA" ���� �����ϴ� �Լ� function �̴�. 
  struct AA A;
  A.i = j;
  
  // function(10) �� 'i ����� ���� 10 �� ����ü ����' �� �����Ͽ� a �� i ��� ���� 10 
  return A;
}
