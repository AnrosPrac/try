#include <stdio.h>

int main() {
  char yourName[50];

  printf("Enter your name: ");
  scanf("%s", yourName);

  printf("Welcome, %s.\n", yourName);

  return 0;
}