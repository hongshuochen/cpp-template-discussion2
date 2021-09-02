#include <iostream>

#include "src/lib/cpplib.h"

int main() {
  // Print Hello world!
  // CPPLib s;
  // std::cout << s.PrintHelloWorld() << std::endl;

  // std::cout << s.fib(6) << std::endl;
  // std::cout << s.fib(4) << std::endl;
  // std::cout << s.fib(8) << std::endl;

  Timeformatter t;
  t.AcceptTime(1,2,3);
  std::cout << t.DisplayTime() << std::endl;
  return 0;
}