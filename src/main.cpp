#include <iostream>
#include <omp.h>
#include <vector>

int main() {
  int sz = 100;
  std::vector<int> X(sz, 1);
  std::vector<int> Y(sz, 1);
  std::vector<int> Z(sz, 0);
  // our groundbreaking parallelised vector addition
  #pragma omp parallel
  {
    for(int i=0; i<sz; i++) {
      Z[i] = X[i] + Y[i];
    }
  }
  std::cout << "result: [";
  for(auto val: Z) {
    std::cout << val << " ";
  }
  std::cout << "]" << std::endl;
}
