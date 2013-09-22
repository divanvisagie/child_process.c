#include <string.h>

typedef void(*cb_fn)(char*); //typedef of callback function

FILE* spawn( char* process, cb_fn outcb ) {

  char line[200];
  FILE* output = popen(process, "r");
  while ( fgets(line, 199, output) ) {
    outcb( line );
  }

  return FILE;
}
#export spawn as spawn
