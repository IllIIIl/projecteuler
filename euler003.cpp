#include <iostream>
#include <math.h>

using namespace std;

//just print out the factors and the biggest one is the answer
void primeFactors(long n) {
   while (n % 2 == 0){
      cout << "2\t";
      n = n / 2;
   }
   for (int i = 3; i <= sqrt(n); i = i + 2){
      while (n % i == 0){
         cout << i << "\t";
         n = n / i;
      }
   }
   if (n > 2)
   cout << n << "\t";
}
int main() {
   long n = 600851475143;
   cout << "Prime factors of " << n << " are :\t";
   primeFactors(n);
    
   return 0;
}
