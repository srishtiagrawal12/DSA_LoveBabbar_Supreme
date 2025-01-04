#include <iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
  int ans=0;
  for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
  }
  return ans;
}
int main() {
  cout << "Hello world!" << endl;
  vector<int> arr={1, 2,-1, 4, 5,1,2,4,5};
  int ans = findUnique(arr);
  cout<<ans;
  return 0;
}
