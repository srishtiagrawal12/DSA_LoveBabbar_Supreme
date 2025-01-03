#include <iostream>
#include<math.h>
using namespace std;

//Division method
void decimalToBinary(int n){
  int rem,sum=0,i=0;
  while(n>0){
    rem=n%2;
    sum=sum+rem*pow(10,i++);
    n=n/2;
  }
  cout<<sum;
}

//Bitwise method
void decimalToBinaryUsingBitwise(int n){
  int rem,sum=0,i=0;
  while(n>0){
    rem=n&1;
    sum=sum+rem*pow(10,i++);
    n=n>>1;
  }
  cout<<sum;
}
int main() {
  decimalToBinary(10);
  return 0;
}
