#pragma once

#include <vector>
#include <string>
#include <filesystem>
#include <fstream>

class File {
public:

  std::filesystem::path file_path;
  std::vector<std::string> file_buf;

  File(char * path);

  void print_file();
};