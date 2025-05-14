#include "User.hpp"

#include <array>
#include <ncurses.h>

int User::get_input(std::array<int,40> & input, int & input_length)
{
  input_length = 0;
  while(input_length < 40)
  {
    int read_char = get_key_press();
    input[input_length++] = read_char;
    if (stop_chars.find(read_char) != std::string::npos) 
    {
      return EXIT_SUCCESS;
    }
  }
  return EXIT_FAILURE;
}

int User::get_key_press()
{
  int key_press = getch();
  return key_press;
}