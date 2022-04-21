#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "myFunctions.h"

int main(int argc, char const *argv[])
{
  char a[] = "Aviva";
  bool r = isPalindrome(a);
  printf("%d\n", r);
  printf("%s\n",a);
  return 0;
}

