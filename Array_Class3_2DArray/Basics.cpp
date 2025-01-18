#include <iostream>
#include<limits.h>
using namespace std;

int getMaxNum(int arr[][3], int row, int col){
  
  int maxi=INT_MIN;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]>maxi)
      {
        maxi=arr[i][j];
      }
    }
  }
   return maxi;
}
int main() {
  cout<<"Hello world";
  //declaration
  int arr[3][3];

  //initialisation
  int brr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
  int row=3;
  int col=3;
//print rowwise
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }
//columnwise
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<brr[j][i]<<" ";
    }
    cout<<endl;
  }

//row wise sum print
for(int i=0;i<row;i++){
  int sum=0;
    for(int j=0;j<col;j++){
      sum=sum+brr[i][j];
    }
    cout<<sum<<endl;
}
//column wise sum print
for(int i=0;i<col;i++){
  int sum=0;
    for(int j=0;j<row;j++){
      sum=sum+brr[j][i];
    }
    cout<<sum<<endl;
}
cout<<"Max num "<<getMaxNum(brr,3,3);
  return 0;
}
