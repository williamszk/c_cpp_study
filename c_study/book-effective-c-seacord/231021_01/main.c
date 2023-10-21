#include <stdio.h>

// note that when we define the functions here we don't need to pass the name
// of the parameters, just their types
void swap(int, int);
void swap2(int*, int*);


int main()
{
  int a = 21;
  int b = 17;
  int * ptrA = &a;
  int * ptrB = &b;

  printf("before 1 main: a = %d, b = %d\n", a, b);
  swap(a, b);
  printf("after 1 main: a = %d, b = %d\n", a, b);
  printf("--------------------------------------------------------------------\n");
  swap2(ptrA, ptrB);
  printf("after 2 main: a = %d, b = %d\n", a, b);

  return 0;
}

void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;
  printf("swap: a = %d, b = %d\n", a, b);
}

void swap2(int* ptrA, int* ptrB){
  int valT;
  valT = *ptrA;
  *ptrA = *ptrB; // dereferencing
  *ptrB = valT;
}