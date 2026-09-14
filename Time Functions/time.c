#include <stdio.h>
#include <time.h>

int main() {
  time_t currentTime;
  time(&currentTime); // Get the current time

  printf("Current time: %s", ctime(&currentTime));
  return 0;
}

//output 
//Current time: Mon Sep 14 21:27:34 2026
