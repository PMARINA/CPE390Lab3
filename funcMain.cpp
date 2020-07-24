#include <iostream>
using namespace std;

int add(int, int);
int multiply(int, int);
int binomial(int x, int coeff1, int coeff2, int coeff3);
int main() {
  cout << add(3, 4) << endl;
  cout << multiply(4, 5) << endl;
  cout << binomial(2, 3, 2, 4) << endl;
}