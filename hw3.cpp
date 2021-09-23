#include <iostream>
using namespace std;
int main() {
    int number,num_on_line=0;
    cout<<"Enter a three digit number"<<endl;
    cin>>number;
    while((number<100) || (number>=1000)){
        cout<<"Please enter a three digit number"<<endl;
        cin>>number;
    }
    if((number>=100)&&(number<1000)){
      for(number=number;number>=100;number--){
       cout<<number<<" ";
       num_on_line++;
       if(num_on_line==15){
         cout<<endl;
         num_on_line=0;
       }
    }
    }
   int odd_number,row,column,a;
   double median_number,mediandouble;
   cout<<"Enter an odd number between 9 and 19 inclusive"<<endl;
   cin>>odd_number;
   median_number=(odd_number/2.0)+0.5;
   mediandouble=median_number*2;
   while((odd_number<9) && (odd_number>19) && (odd_number%2==0)){
     cout<<"Please enter an odd number"<<endl;
     cin>>odd_number;
   }
   if((odd_number>=9) && (odd_number<=19) && (odd_number%2==1)){
    for(int row=1; row<=odd_number;row++){
     for(int a=1;a<=3;a++){
      for(int column=1; column<=odd_number;column++){
       if((row==column) || (odd_number==row+(column-1))) cout<<"*";
       else if(((row==median_number) || (column==median_number))&&(row+column!=mediandouble)) cout<<"#";
       else cout<<" ";
      }
     cout<<"  ";
     }
    cout << endl;
    }  
   }
return 0;
}
// Haque,Ishmam
//  CSC111 11a Homework 3
