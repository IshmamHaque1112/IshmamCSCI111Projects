#include <iostream>
#include <cmath>
using namespace std;
int year,month,day,nonhundredyearquotient,weektotal,weektotalremainder,nonhundredyearsum,century,nonhundredyear,century_remainder,century_quotient,threesubtraction,threesubtractiondouble;
double a,b,c,area,semiperimeter,perimeter;
string type_of_day;
void TriangleAreaandPerimeter(double a,double b,double c){
 if(((a+b)>c) && ((b+c)>a) && ((a+c)>b)){
  semiperimeter=((a+b+c)/2);
  perimeter=a+b+c;
  area=sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
  cout<<area<<" units squared is the area"<<endl<<perimeter<<" units is the perimeter"<<endl;
 }
 else{
  cout<<"Doesn't work. Good day";
 } 
} 
bool isLeapYear(int year){
 if ((year%400==0) || ((year%4==0) && (year%100!=0))){
   return true;
 }
 else{
  return false;
 }
}
int getCenturyValue(int year){
 century=year/100;
 century_quotient=century/4;
 century_remainder=century%4;
 threesubtraction=3-century_remainder;
 threesubtractiondouble=threesubtraction*2;
 return threesubtractiondouble;
}
int getYearValue(int year){
 century=year/100;
 nonhundredyear=year%100;
 nonhundredyearquotient=nonhundredyear/4;
 nonhundredyearsum=nonhundredyearquotient+nonhundredyear;
 return nonhundredyearsum;
}
int getMonthValue(int month, int year){
 if (month==1 && isLeapYear(year)==true) return 6;
 if (month==1 && isLeapYear(year)==false) return 0;
 if (month==2 && isLeapYear(year)==true) return 2;
 if (month==2 && isLeapYear(year)==false) return 3;
 if (month==3) return 3;
 if (month==4) return 6;
 if (month==5) return 1;
 if (month==6) return 4;
 if (month==7) return 6;
 if (month==8) return 2;
 if (month==9) return 5;
 if (month==10) return 0;
 if (month==11) return 3;
 if (month==12) return 5;
}

int main(){
    int year,month,day,nonhundredyearquotient,weektotal,weektotalremainder,nonhundredyearsum,century,nonhundredyear,century_remainder,century_quotient,threesubtraction,threesubtractiondouble;
    double a,b,c,semiperimeter,perimeter,area;
    string type_of_day;
    cout<<"Please enter a date.Month first(1-12),day (1-31) next, year last:"<<endl;
    cin>>month>>day>>year;
    while((month<1) ||(month>12) ||(day<1) || (day>31)){
     cout<<"Not valid. Input again";
     cin>>month>>day>>year;
    } 
    if((month>0) && (month<13) && (day>0) && (day<32)){
     isLeapYear(year);
     getCenturyValue(year);
     getYearValue(year);
     getMonthValue(month,year);
     weektotal=day+getMonthValue(month,year)+getYearValue(year)+getCenturyValue(year);
     weektotalremainder=weektotal%7;
     if (weektotalremainder==0) type_of_day=" is a Sunday";
     if (weektotalremainder==1) type_of_day="is a Monday";
     if (weektotalremainder==2) type_of_day=" is a Tuesday";
     if (weektotalremainder==3) type_of_day=" is a Wednesday";
     if (weektotalremainder==4) type_of_day=" is a Thursday";
     if (weektotalremainder==5) type_of_day=" is a Friday";
     if (weektotalremainder==6) type_of_day=" is a Saturday";
    }
    cout<<month<<"//"<<day<<"//"<<year<<type_of_day<<endl;
    cout<<"Input your sides for your triangle"<<endl;
    cin>>a>>b>>c;
    TriangleAreaandPerimeter(a,b,c);
    return 0;
}
// Haque Ishmam
// cs111 11a Homework 4
//I initially added reference parameters under guidance of a tutor, but they didn't work as intended, so I reverted to traditional coding. Hope you understand :)




