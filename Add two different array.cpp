//Add two different array 
//TC-O(N), SC-O(1)
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr1[n], arr2[n], arr3[n+n];
    cout<<"enter 1nd array element";
    for(int i=0; i<=n-1; ++i){
        cin>>arr1[i];
    }
    
     cout<<"enter 2nd array element";
    //int arr2[n];
    for(int j=0; j<=n-1; ++j){
        cin>>arr2[j];
    }
    for(int k=0; k<=n-1;  k++ ){
        arr3[k]=arr1[k];
        arr3[k+n]=arr2[k];
}
    for(int i=0; i<=n+n-1; i++){
        cout<<arr3[i];
    }
    
    return 0;
}