#pragma once

#include <string>

class User
{


  std::string stop_chars = "qhjkl";
  // bool return_input = false;
  int get_key_press();
public:
  // User();
  const int max_input_length = 40;
  int get_input(std::array<int,40> & input, int & input_length);
};