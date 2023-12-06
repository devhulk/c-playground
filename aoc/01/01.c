#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 1abc2
// pqr3stu8vwx
// a1b2c3d4e5f
// treb7uchet

//In this example, the calibration values of these four lines are 12, 38, 15, and 77. Adding these together produces 142.
//


int main(int argc, char *argv[]) {
  char one[] = "1abc2";
  char two[] = "pqr3stu8vwx";
  char three[] = "a1b2c3d4e5f";
  char four[] = "treb7uchet";

  //char *str = "";
  //char str[100];


  for (int i = 0; i < sizeof(two); i++) {
    if (isdigit(two[i])) {
      char digit = two[i];
      //printf("%c", digit);
      //str = &digit;
    }
  }

      //puts(str);
      //printf("\n%c", *str);
      //printf("\n%lo", sizeof(*str));

}
