#include <stdio.h>

enum Level {
  LOW,
  MEDIUM=7,
  HIGH
};
  
int main() {
  enum Level myVar = LOW;
  printf("%d", myVar);
  
  return 0;
}

//output: 0
