#include <stdio.h>
#include <stdlib.h>

#require "./lib/child_process.c" as cp


void handler (char* data){

  printf("%s\n", data);
}

int main(int arg, char* argv[]) {
  
  printf("%s\n", "asdf" );

  cp.spawn("ls -a", handler);

  return 0;
}