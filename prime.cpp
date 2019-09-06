#include <iostream>
using namespace std;

bool isprime(int a);
int sumeprime(int imin, int imax);

int main ()
{
  cout << sumeprime(50, 100) << '\n';
  return 0;
}

bool isprime(int a)
{
  bool prime = true;
  for(int i = 2; i <= a/2; ++i)
    {
      if(a%i == 0)
	prime = false;
    }
  return prime;
}

int sumeprime(int imin, int imax)
{
  int sum = 0;
  for(int ii = imin; ii <= imax; ++ii)
    {
      if (isprime(ii))
	sum += ii;
    }
  return sum;
}

