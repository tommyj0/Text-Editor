#pragma once

#include <filesystem>
#include <ncurses.h>
#include <vector>
#include <array>

#include "User.hpp"
#include "File.hpp"

class Editor
{
  typedef enum ModeTypes {
    NORMAL = 0,
    INSERT,
    VISUAL,
    REPLACE,
  } ModeTypes;

  ModeTypes current_mode = NORMAL;
  
  std::array<int,40> user_input;
  int user_input_length = 0;
  
  int x = 0;
  int y = 0;
  File file;
  User user;
  bool exit = false;
  void load_file();
  void draw();
public:
  Editor(char * path);
  ~Editor();
  void run(void);
};