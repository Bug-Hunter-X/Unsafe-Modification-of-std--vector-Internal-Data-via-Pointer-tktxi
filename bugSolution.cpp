#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  // Safe modification using iterators
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    *it *= 2; 
  }

  // Safe modification using array indexing
  for (size_t i = 0; i < vec.size(); ++i) {
    vec[i] *= 2; 
  }

  for (int i = 0; i < 10; ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
