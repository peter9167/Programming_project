#include <stdio.h>

struct TEST {
  int age;
  int gender;
};

int set_human(struct TEST *a, int age, int gender); // struct TEST *a : 구조체 포인터 매개변수 선언

int main() {
  struct TEST human; // 구조체 변수 선언

  set_human(&human, 10, 1); // &human : set_human 함수에 구조체 주소 전달

  printf("AGE : %d // Gender : %d ", human.age, human.gender); // AGE : 10 // Gender : 1 
  return 0;
}

int set_human(struct TEST *a, int age, int gender) {
  // 여기서 a는 human을 가리키게 된다. 
  // 주의할 점은 a 는 절대로 구조체 변수가 아니며, 
  // 단순히 human 구조체 변수가 메모리 상에 위치한 곳의 시작 지점 주소값을 보관하고 있는 것이다. 
  a->age = age; // (*a).age = age; 와 같으며, a 가 가르키는 주소에 값 중 age 객체에 age 값 대입(저장)
  a->gender = gender; // 위와 같은 설명

  return 0;
}
