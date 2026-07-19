#include <stdio.h>

int main() {
  char carName[] = "VolvoDevi";
  int length = sizeof(carName) / sizeof(carName[0]);
  int i;
  printf("%d",length);
  
  for (i = 0; i < length; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}

//Whenever you create a string using double quotes (" "), C automatically adds a special character called the null character ('\0') at the end.
