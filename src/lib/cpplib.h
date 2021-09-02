#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <set>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  std::string PrintHelloWorld();

  // Calculates the Nth Fibonacci number
  int fib(int N);
  
  // Finds the max element in a vector
  int FindMax(const std::vector<int> &inputs); 

  std::vector<char> Unfold(const std::vector<char> &A, const std::vector<int> &R);
  int CountUnique(const std::vector<int> &A);
  int CountRepeating(const std::vector<int> &A);
  
  private : std::map<int, int> _m;
};


class Timeformatter
{
  private:
    int hour;
    int minute;
    int second;
  public:
    Timeformatter();
    ~Timeformatter();
    void AcceptTime(int, int, int);
    std::string DisplayTime();
    std::string Converdigit(int);
};


#endif