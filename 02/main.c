#include <stdio.h>
#include <stdlib.h>
#include "flags.c"

int main(int argc, char *argv[]) {


  parseFlags(argc, argv);

  return EXIT_SUCCESS;
}
