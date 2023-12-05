#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc == 1) {
    printf("You didn't pass any flags.\n");
  } else {

    printf("%i total arguments. Including base command '%s'.\n", argc, argv[0]);

    for (int i = 0; i < argc; i++) {
      printf("%s\n", argv[i]);
    }

  }

  return 0;

}
