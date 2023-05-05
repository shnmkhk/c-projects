// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Driver code
int main() {
  FILE* ptr;
  char ch;

  // Opening file in reading mode
  ptr = fopen("test.txt", "r");
  if (NULL == ptr) {
    printf("file can't be opened \n");
  }

  // Printing what is written in file
  // character by character using loop.
  do {
    ch = fgetc(ptr);
    if (ch != EOF) printf("%c", ch);
    // Checking if character is not EOF.
    // If it is EOF stop reading.
  } while (ch != EOF);
  printf("\n");
  // Closing the file
  fclose(ptr);
  return 0;
}
