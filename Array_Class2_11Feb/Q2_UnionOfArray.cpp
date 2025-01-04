#include <iostream>
#include<vector>
using namespace std;


int main() {
  int arr[]={1,2,3,4};
  int sizeA=4;
  int brr[]={5,6};
  int sizeB=2;

  vector<int> v;
  for(int i=0;i<sizeA;i++){
    v.push_back(arr[i]);
  }
  for(int j=0;j<sizeB;j++){
    v.push_back(brr[j]);
  }

  cout<<"Union of array"<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
