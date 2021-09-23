#include <iostream>
using namespace std;
int main(){
    double radius,buoyant_force,weight;
    cout<<"Input your radius in feet";
    cin>>radius;
    cout<<"Input your weight in pounds";
    cin>>weight;
    buoyant_force=((4.0/3.0)*3.14*(radius*radius*radius))*62.4;
    if(buoyant_force>=weight){
       cout<<"The object will float";
    }
    else{cout<<"The object will sink";
    }
    return 0;
}
// Haque,Ishmam
// CSC111 11a, Homework 2b
