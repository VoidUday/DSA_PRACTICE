#include <bits/stdc++.h>
using namespace std;
//Get the maximum element
int getMax(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]); //max function return maximum of arr and current max
        // if(arr[i] > max){
        //     max = arr[i];
        // }
    }
    return maxi;
}
//Get the minimum element
int getMin(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        mini = min(mini, arr[i]); //min function return minimum of arr and current min
        // if(arr[i] < min){
        //     min = arr[i];
        // }
    }
    return mini;
}
//Main method
int main(){
  int n;
   cin >> n;
   int arr[100];
   for(int i=0; i<n; i++){
   cin >> arr[i];
   }
//Printing the max and min element
cout << "Max element of Array is : " << getMax(arr, n)<< endl;
cout << "Min element of Array is : " << getMin(arr, n)<< endl;

}