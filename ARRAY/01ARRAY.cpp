#include<iostream>
using namespace std;
int main(){
  int n;
   cin >> n;
   //Declare

   int arr[n];
   //Taking input

   for(int i=0; i<n; i++){
   cin >> arr[i];
   }
   //Accessing of array

   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " "; 
      
   }
   

}