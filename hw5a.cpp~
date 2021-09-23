#include <iostream>
using namespace std;
int num,a,interest,initial,years;
double totalbalance(int initial,int interest,int years){
 if(years==1) return initial*(1+interest*0.01)*years;
 else return totalbalance(initial*(1+interest*0.01),interest,years-1);
}
int bowlingpins(int num){
 if(num==1) return 1;
 else{
  return num+bowlingpins(num-1);
 }
} 
int main(){
  cout<<"Input number of rows for bowling pin"<<endl;
  cin>>a;
  cout<<bowlingpins(a)<<" pins"<<endl;
  cout<<"Input your balance,yearly interest,and years"<<endl;
  cin>>initial>>interest>>years;
  cout<<totalbalance(initial,interest,years)<<" dollars"<<endl;
return 0;
}
//Haque,Ishmam
//CSC111 11A Homework 5a
