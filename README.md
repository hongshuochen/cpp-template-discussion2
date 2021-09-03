Discussion 2 2021/09/01

Solution
```c++
std::vector<char> CPPLib::Unfold(const std::vector<char> &A, const std::vector<int> &R){
  std::vector<char> res;
  int n = A.size();
  for (int i = 0; i < n; ++i){
    for (int j = 0; j < R[i]; ++j){
      res.push_back(A[i]);
    }
  }
  return res;
}

int CPPLib::CountUnique(const std::vector<int> &A){
  std::set<int> s;
  for (const auto &x: A){
    s.insert(x);
  }
  return s.size();
}

int CPPLib::CountRepeating(const std::vector<int> &A){
  std::map<int, int> count;
  for (const auto &x : A) {
    ++count[x];
  }
  int ans = 0;
  for (auto x : count){
    ans += (x.second > 1);
  }
  return ans;
}

Timeformatter::Timeformatter(){
  this->hour = -1;
  this->minute = -1;
  this->second = -1;
}

Timeformatter::~Timeformatter(){}

void Timeformatter::AcceptTime(int HH, int MM, int SS){
  this->hour = HH;
  this->minute = MM;
  this->second = SS;
}

std::string Timeformatter::DisplayTime(){
  if (hour == -1){
    return "Invalid!";
  } else {
    return Converdigit(this->hour) + ':' + Converdigit(this->minute) + ':' + Converdigit(this->second);
  }
}

std::string Timeformatter::Converdigit(int digit){
  std::string digit_string = std::to_string(digit);
  if (digit_string.size() < 2){
    digit_string = '0' + digit_string;
  }
  return digit_string;
}

```
