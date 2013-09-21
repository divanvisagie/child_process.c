#include <string.h>

void spawn( char* process, char** out ) {

  int entry = 1;
  char line[200];
  FILE* output = popen(process, "r");
  while ( fgets(line, 199, output) ) {
    printf("%5d: %s", entry++, line);
  }
}
#export spawn as spawn