#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

  int cur_pid = getpid();
  printf("hello world, my process id is %d", cur_pid);
  return 0;
}
