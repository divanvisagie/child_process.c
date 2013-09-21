#include <stdio.h>
#include <stdlib.h>

#require "./lib/child_process.c" as cp
int main(int arg, char* argv[]) {
  
  printf("%s\n", "asdf" );

  char* out = (char*)malloc(sizeof(char)*200);

  cp.spawn("ls -a", &out);


  return 0;
}