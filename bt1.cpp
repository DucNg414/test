#include<iostream>
using namespace std;
int giaithua(int n) {
    if(n==0) return 1;
      return n*giaithua(n-1);
}
  int main() {
    int n; 
    cout<<"Nhap n = ";
    cin>>n;
    int s = giaithua(n);
    cout<<"ket qua = "<<s;
  }