#include <stdio.h>

int main(void) {
  // Array of pointers to strings that form the pattern:
  char *a[] = {
    "********* ",
    "*   *   * ",
    "    *     ",
    "    *     ",
    "    ******",
    "    *    *",
    "    *    *",
    "    *    *",
  };

  // Find array length for use in loop:
  int aLength = sizeof(a) / sizeof(a[0]);

  // Loop and print each array element to form patter:
  for (int i = 0; i < aLength; ++i)
    printf("%s\n", a[i]);

  return 0;
}

// 28 Dec 2023