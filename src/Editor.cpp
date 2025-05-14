#include <ncurses.h>
#include "Editor.hpp"
#include "File.hpp"

Editor::Editor(char * path) :
  file(path)
{
  initscr();
  noecho();
}

void Editor::draw()
{
  for (size_t yi = 0; (int)yi < COLS, yi < file.file_buf.size(); ++yi)
  {
    move(yi,0);
    printw("%s",file.file_buf[yi].c_str());
  }
  move(y,x);
}
void Editor::run()
{
  draw();
  refresh();
  move(0,0);
  // main loop

  while(!exit) 
  {
    user.get_input(user_input,user_input_length);
    if (user_input[user_input_length - 1] == (int)'q')
    {
      exit = true;
    }
  }
}

Editor::~Editor()
{
  clear();
  refresh();
  getch();
  endwin();
}