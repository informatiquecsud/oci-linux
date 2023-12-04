#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  unsigned int result;
  unsigned long n;

  printf("# of bytes in result: %ld\n", sizeof(result));

  if (argc == 2) {
    n = atol(argv[1]);
  } else {
    printf("Usage: %s <N>\n", argv[0]);
    return -1;
  }

  result = 1;
  for (int i = 1; i <= n; i += 1) {
    result = result << 1;
    printf("Result: %u\n", result);
  }

  return 0;
}