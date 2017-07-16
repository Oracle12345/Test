#include "lib_01.h"

int main(int argc, char const *argv[]) {

  setlocale(LC_ALL, "Russian");

  Test* t = new Test();

  t->print_str();

  return 0;
}
