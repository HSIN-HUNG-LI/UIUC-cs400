#include <iostream>

using std::cout;
using std::endl;

int main() {
  int  i =  2,  j =  4,  k =  8;
  int *p = &i, *q = &j, *r = &k;

  k = i;
  cout << i << j << k << *p << *q << *r << endl;
  cout << p << endl << q << endl << r << endl;
  p = q;
  cout << i << j << k << *p << *q << *r << endl;
  cout << p << endl << q << endl << r << endl;
  *q = *r;
  cout << i << j << k << *p << *q << *r << endl;
  cout << p << endl << q << endl << r << endl;

  return 0;
}
