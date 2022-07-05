#include <stdio.h>

struct employee { 
  // int 형의 age 와 salary 변수 두 개 멤버 구성 
  int age;
  int salary;
};

struct company {
  struct employee data;
  // 구조체도 int 나 char 과 같은 하나의 형(type) 이다.
  // struct employee 는 타입의 data 라는 (구조체) 변수를 생성. 
  // int a 와 지극히 똑같은 작업
  char name[10];
};

int main() {
  struct company Kim; // struct company 형의 변수 Kim 정의

  Kim.data.age = 31; // Kim 의 data 멤버의 age 멤버 에 31 의 값 대입 
  Kim.data.salary = 3000000; // 위와 같음 

  printf("Kim's age : %d \n", Kim.data.age); // Kim's age : 31 
  printf("Kim's salary : %d$/year \n", Kim.data.salary); // Kim's salary : 3000000$/year

  return 0;
}
