#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  if (strcmp(argv[1], "bar")) {
   /std::cout << ""; // << std::endl;
  } else if (strcmp(argv[1], "foo")) {
    std::cout << "Hello, Anacapa!  This is the expected output." << std::endl;
  }

  return 0;
}
