#include<iostream>
using namespace std;
//print the element
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
//Finding sum of all element
int sumOfArray(int arr[], int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
//Main function
int main(){
  int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
   cin >> arr[i];
   }
   //calling print function
   printArray(arr, n);
   //print sum of all element
   cout << "Sum of Array is : " <<sumOfArray(arr, n);

}