#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *name;

  name = (char *)malloc(51 * sizeof(char));
  if (name == NULL) {
    perror("Memory allocation failed");
    return 1;
  }

  printf("Enter your name:");
  scanf("%s", name);
  printf("Hello, %s\n", name);

  free(name);
  return 0;
}
