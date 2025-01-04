#include <iostream>
#include<vector>
using namespace std;


int main() {
  int arr[]={1,2,3,4};
  int sizeA=4;
  int brr[]={3,4,5,6};
  int sizeB=4;

  vector<int> v;
  for(int i=0;i<sizeA;i++){
    for(int j=0;j<sizeB;j++){
      if(arr[i]==brr[j]){
        v.push_back(arr[i]);
      }
    }
  }
  
  //If it contains duplicate value
  cout<<"Intersection of array"<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
