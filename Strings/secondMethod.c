//another method of creating string
#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  
  printf("%s\n", greetings);
  printf("%s\n", greetings2);
  
  return 0;
}


// /0 at the end if compulasory otherwise it prints wrong output at end of string


#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!','\0'};
  char greetings2[] = "Hello World!";
char geet[10] = {
    'A','B','C','D','E',
    'F','G','H','I','J'
};
printf("%s \n",geet);
  printf("%s\n", greetings);
  printf("%s\n", greetings2);

  return 0;
}
