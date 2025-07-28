#include<iostream>
#include<vector>
using namespace std ;
int main (){
  int n ;
  cout << "enter the number";
  cin >>n;
  vector<int>numbers(n);
int sum = 0;
  for (int i =0 ; i<n; i++){
    cin >> numbers[i];
    sum += numbers[i];
  }
  double average = static_cast<double>(sum)/n;
  cout <<"average"<<average<<endl;

return 0;
}
