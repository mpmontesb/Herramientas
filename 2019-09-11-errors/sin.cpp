#include <iostream>
#include <fstream>
#include <cmath>

int main(void)
{
  std::ofstream fout("datos.txt");
  double x = 0.0; //rad
  const int N = 10;
  for(x = 0,1; x < 6.0; x+= 0.1) {
    double sum = x;
    double term = x;
    for(int ii = 2; ii < N; ++ii) {
      term = term*x*x/((2*ii)*(2*ii+1));
      sum += term;
    }
    fout << "\t"  << term << "\t" << sum << "\t" << std::sin(x) << "\n";
  }
  fout.close();
  return 0;
}
