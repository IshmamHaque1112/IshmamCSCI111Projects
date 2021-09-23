#include <iostream>
#include <cstdlib>
using namespace std;
int num_of_elements,cap,s,x,y,i,ans,ans1,ans2;
int maximum(int x[],int y){
 int ans=x[0];
 for(int s=0;s<y;s++){
  if(x[s]>ans) ans=x[s];
 }
 return ans;
}
int minimum(int x[],int y){
 int ans=x[0];
 for(int s=0;s<y;s++){
  if(x[s]<ans) ans=x[s];
 }
 return ans;
} 
int range(int x[], int y){
 return maximum(x,y)-minimum(x,y);
}
void reverse(int x[], int y){
  int s=0;
  int i=y-1;
  for(int s=0;s<i;s++){
   ans1=x[s];
   for(int i=y-1;i>s;i--){
    ans2=x[i];
    if((i+s)==y-1){
     x[s]=ans2;
     x[i]=ans1;
    } 
   }
  }
}
int main(){
 cout<<"Enter number of elements in array?"<<endl;
 cin>>cap;
 cout<<"number of elements is "<<cap<<endl;
 int array[cap];
 for(int s=0;s<cap;s++){
  cout<<"What is the element for "<<s<<"?"<<endl;
  cin>>array[s];
 }
 for(int s=0;s<cap;s++) cout<<array[s]<<" ";
 maximum(array,cap);
 minimum(array,cap);
 range(array,cap);
 cout<<"The range of the array is "<<range(array,cap)<<endl;
 reverse(array,cap);
 cout<<"The array reversed is:"<<endl;
 for(int s=0;s<cap;s++) cout<<array[s]<<" ";
 return 0;
}
//Haque,Ishmam
//CSC111 11A Homework 5b
