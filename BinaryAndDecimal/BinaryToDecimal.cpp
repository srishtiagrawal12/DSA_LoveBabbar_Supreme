#include <iostream>
#include<math.h>
using namespace std;

void binaryToDecimal(int n){
  int rem,sum=0,i=0;
  while(n>0){
    rem=n%10;
    sum=sum+rem*pow(2,i++);
    n=n/10;
  }
  cout<<sum;
}
int main() {
  binaryToDecimal(11);
  return 0;
}
