#include <iostream>
#include <omp.h>
#include <vector>


int main() {
  std::cout << "Bhjbzxjhvdsajgvdgasvjd" << std::endl;
  int sz = 100;
  std::vector<int> X(sz, 1);
  std::vector<int> Y(sz, 1);
  std::vector<int> Z(sz, 0);
  /* is this  being parallelised? */
  #pragma omp parallel for num_threads(4)
  for(int i=0; i<sz; i++) {
    std::cout << omp_get_thread_num() << std::endl;
    Z[i] = X[i] + Y[i];
  }
}
