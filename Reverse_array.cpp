#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   int st=0, en=n-1;
    while(en>st){
            int temp=0;
            temp=arr[st];
            arr[st]=arr[en];
            arr[en]=temp;
            st++;
            en--;
    }

     for(int i=0; i<n; i++)
        cout<<arr[i];
    return 0;
}