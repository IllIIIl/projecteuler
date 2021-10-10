#include <iostream>
#include <math.h>
using namespace std;
int main() {
   long x = 600851475143;
    while (x % 2 == 0){
       cout << "2\t";
       x = x / 2;
    }
    for (int i = 3; i <= sqrt(x); i = i + 2){
       while (x % i == 0){
          cout << i << "\t";
          x = x / i;
       }
    }
    if (x > 2)
        cout << x << "\t";
   return 0;
}
