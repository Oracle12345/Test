#include <string>
#include <iostream>

class Test
{
private:
  std::string _str;

public:
  Test(const std::string str = "Hello World!");
  ~Test();
  void print_str();
};
