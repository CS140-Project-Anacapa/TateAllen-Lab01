#include <iostream>
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
  if (strcmp(argv[1], "bar")) {
    //std::cout << ""; // << std::endl;
    int i = 0;
    while (i < 6) { usleep(1E6); }

  } else if (strcmp(argv[1], "foo")) {
    std::cout << "Hello, Anacapa!  This is the expected output." << std::endl;
  }

  return 0;
}
