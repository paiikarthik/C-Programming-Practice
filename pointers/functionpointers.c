void greetMorning() { printf("Good morning!\n"); }
void greetEvening() { printf("Good evening!\n"); }

void greet(void (*func)()) {
  func();
}

int main() {
  greet(greetMorning);
  greet(greetEvening);
  return 0;
}

//passing function as argument
