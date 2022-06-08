#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, D;
  cin>>a>>b>>c;
  float x1, x2;
  D=b*b-4*a*c;
  if(D>=0){
      if(D>0){
          x1=-b-(sqrt(D))/2*a; x2=-b+(sqrt(D))/2*a;
          cout<<"D is not equal to zero";
          cout<<x1<<" "<<x2<<endl;
      }else{
          x1=x2=-b/2*a;
          cout<<"D is equal to zero";
          cout<<x1<<" "<<x2<<endl;
      }
  }else{
      x1=-b/2*a;
      x2= sqrt(-D)/2*a;
      cout<<"imaginary value"<<x1<<" "<<x2<<endl;
  }
  
    return 0;
}