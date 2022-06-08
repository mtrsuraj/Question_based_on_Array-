#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr1[n];
  for(int i=0; i<=n-1; i++){
      cin>>arr1[i];
  }
  int arr2[n];
  for(int i=0; i<=n-1; i++){
      cin>>arr2[i];
  }
  for(int i=0; i<=n-1; ++i){
      for(int j=i+1; j<=n-1; j++){
          if(arr1[i]>arr1[j]){
              int temp=arr1[i];
              arr1[i]=arr1[j];
              arr1[j]=temp;
          }
      }
  }
  for(int i=0; i<=n-1; ++i){
      for(int j=i+1; j<=n-1; j++){
          if(arr2[i]>arr2[j]){
              int temp=arr2[i];
              arr2[i]=arr2[j];
              arr2[j]=temp;
          }
      }
  }
  int i=0;
  if(arr1[i]==arr2[i]){
      cout<<"both are same"<<endl;
  }else{
      cout<<"not same"<<endl;
  }

    return 0;
}