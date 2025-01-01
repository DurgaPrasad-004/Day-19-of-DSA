#include<bits/stdc++.h>
using namespace std;

// int secondLargest(int arr[], int n){
//     int largest = arr[0];
//     int secondLargest = 0;
//     int i;
//     for(int i = 1; i < n; i++){
//         if(arr[i] > largest){
//             secondLargest = largest;
//             largest = arr[i];
//         }else if(arr[i] < largest && arr[i] > secondLargest){
//             secondLargest = arr[i];
//         }
//     }
//     cout << "Second largest number is: " << secondLargest;
// }

// Check if the array is sorted
bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[i])
        return false;
    }
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;
  bool ans = isSorted(arr, n);
  if (ans) cout << "True" << endl;
  else cout << "False" << endl;
  return 0;
}

// 
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}