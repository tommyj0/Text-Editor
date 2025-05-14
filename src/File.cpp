#include "File.hpp"
#include <iostream>

File::File(char * path)
:file_path(std::filesystem::path(path))
{
  std::string line_buf;
  std::ifstream file_in(path);
  while (!file_in.eof())
  {
    std::getline(file_in,line_buf);
    file_buf.push_back(line_buf);
  }
}

void File::print_file()
{
  for (auto line : file_buf)
  {
    std::cout << line << "\n";
  }
}




