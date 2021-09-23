#include <iostream>
using namespace std;
int main(){
    double weight, height, BMI;
    cout<<"Please enter your height in inches: ";
    cin>>height;
    if(height<10.0){
     cout<<"This isn't valid";
     return 0;
    }
    else{  
      cout<< "Enter your weight in pounds: ";
      cin>>weight;
      while(weight<=0.0){
             cout<<"This isn't valid. Enter your pounds again ";
             cin>>weight;
      }    
      BMI=(weight*1.0)*703.0/(height*height*1.0);
      
      if((18.5<=BMI) && (BMI<=25.0)){
        cout<<"Your BMI is " <<BMI<<" and your BMI is normal ";
      }  
      if(BMI<18.5){
        cout<< "Your BMI is " <<BMI<<" and your BMI is underweight ";
      }  
      if(BMI>25.0){
        cout<<"Your BMI is " <<BMI<<" and your BMI is overweight ";
      }          
    }
    return 0;
}
// Haque Ishmam
// CSC111 11a
