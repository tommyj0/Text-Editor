#include <iostream>
#include <ncurses.h>
#include <fstream>
#include <cassert>
#include <vector>
#include <string>
#include <filesystem>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#include "Editor.hpp"

int main(int argc, char * argv[])
{
  if (argc != 2)
  {
    printf("Error: %d input arguements provided, pass in file name\n", argc);
  }

  Editor text_ed(argv[1]);
  text_ed.run(); 
  std::cout << "Exiting..." << "\n";
}