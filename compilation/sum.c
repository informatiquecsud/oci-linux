#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int result = 0;
  int n;

  if (argc == 2) {
    n = atoi(argv[1]);
  } else if (argc == 1) {
    n = 100;
  } else {
    printf("Usage: %s <N>", argv[0]);
  }

  for (int i = 1; i <= n; i += 1) {
    result += i;
  }

  printf("The sum of integers up to %d is %d\n", n, result);
  return 0;
}