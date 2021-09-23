//Homework 6
//Created in Dec 2018 by 
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string toUpperCase(string a){
 string b="";
 int size=a.size();
 for(int i=0;i<size;i++){
  if((a[i]>96) && (a[i]<123)) b=b+(char)(a[i]-32);  
  else b=b+a[i];
 }
 return b;
}
string toLowerCase(string a){
 string b="";
 int size=a.size();
 for(int i=0;i<size;i++){
  if((a[i]>64) && (a[i]<91)) b=b+(char)(a[i]+32);
  else b=b+a[i];
 }
 return b;
}
bool equals(string a,string b){
 if(a==b) return true;
 else return false;
}
int main () {
	string word1, word2;
    for (int i = 1; i <= 5; i++) {
        cout << "Test Run #" << i << endl;
        cout << "Please enter two words: ";
        cin >> word1 >> word2;
        cout << word1 << " " << word2 << endl; //needed for my test script
        cout << "Words in uppercase: " << toUpperCase(word1) << " " << toUpperCase(word2) << endl;
        cout << "Words in lowercase: " << toLowerCase(word1) << " " << toLowerCase(word2) << endl;
        if (equals(word1, word2))
            cout << "Both strings are equal." << endl;
        else
            cout << "The input strings are different." << endl;
    }
	return 0;
}
//Haque,Ishmam
//CS111 11A Homework 6
