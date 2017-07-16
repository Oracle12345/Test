#include "lib_01.h"

Test::Test(const std::string str) : _str(str) {};


Test::~Test()
{
}

void Test::print_str()
{
  std::cout << _str << std::endl;

  return;
}
