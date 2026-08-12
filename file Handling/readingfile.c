#include <stdio.h>

int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen("filename.txt", "w");

  // Close the file
  fclose(fptr);

  return 0;
}

//if filename doesnt exist it will  create
//modes are w, a-> append, r ->read
