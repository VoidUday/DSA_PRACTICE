#include<iostream>
using namespace std;
//print array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
}
//Swapping array
void swapArray(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i] , arr[i+1]);
        }
    }
}
//Main function
int main(){
  int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
   cin >> arr[i];
   }
 //Calling function
   swapArray(arr, n);
   printArray(arr, n);
}
