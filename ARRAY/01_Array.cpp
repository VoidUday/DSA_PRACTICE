#include<iostream>
using namespace std;

void printArray(int arr[], int n){
  for(int i=0; i<n; i++){
    cout << "Array of index at " << i << "is : "<< arr[i] <<endl;
   }
}
int main(){
  int n;
   cin >> n;
   //Declaration
   int arr[n];
   //Taking input of array element
   for(int i=0; i<n; i++){
   cin >> arr[i];
   } 
   printArray(arr, n);

}