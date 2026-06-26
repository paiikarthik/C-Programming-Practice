#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
  myInt=12;
  myInt=13;
 int arr[4]={10, 20, 30, 40};
  printf("%zu\n", sizeof(arr));
  printf("%zu\n", sizeof(myFloat));
  printf("%zu\n", sizeof(myDouble));
  printf("%zu\n", sizeof(myChar));
  
  return 0;
}
