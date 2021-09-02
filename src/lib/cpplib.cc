#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// Calculates the Nth Fibonacci number
int CPPLib::fib(int N) {
  if (N == 0) {
    return 0;
  }

  if (N == 1) {
    return 1;
  }

  return fib(N - 1) + fib(N - 2);
}

int CPPLib::FindMax(const std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }

  int result = std::numeric_limits<int>::min();
  for (auto n : inputs) {
    if (n > result) {
      result = n;
    }
  }
  return result;
}

// Discussion 2

std::vector<char> CPPLib::Unfold(const std::vector<char> &A, const std::vector<int> &R){
  std::vector<char> res;
  return res;
}

int CPPLib::CountUnique(const std::vector<int> &A){
  std::set<int> s;
  return 0;
}

int CPPLib::CountRepeating(const std::vector<int> &A){
  std::map<int, int> count;
  return 0;
}

Timeformatter::Timeformatter(){

}

Timeformatter::~Timeformatter(){}

void Timeformatter::AcceptTime(int HH, int MM, int SS){

}

std::string Timeformatter::DisplayTime(){

}

std::string Timeformatter::Converdigit(int digit){

}

// Discussion 2