#include <stdio.h>
#include <stdlib.h>

void parseFlags(int argc, char *argv[]) {

  printf("%lu\n", sizeof(argc));

  if (argc == 1) {
      printf("You didn't pass any flags.\n");
  } else {
    for (int i = 0; i < argc; i++) {
      printf("referenced: %s\n", argv[i]);
      printf("%lu\n", sizeof(*argv[i]));
    }
  }

}
