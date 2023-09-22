#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("printing the contents of argv\n");
  for (int i = 0; i < argc; i++) {
    printf("inspecting command %s\n", argv[i]);
    printf("index %d\n", i);
  }
  return 0;
}
