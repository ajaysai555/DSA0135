#include<iostream>
using namespace std;
int main()
{
	 int A, reversed_alp = 0, remainder;

  cout << "Enter an alp: ";
  cin >> A;

  while(A != 0) {
    remainder = A % 10;
    reversed_alp = reversed_alp * 10 + remainder;
    A /= 10;
  }

  cout << "Reversed alp = " << reversed_alp;

  return 0;
}
