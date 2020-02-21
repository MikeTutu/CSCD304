#include <iostream>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int key) {
  while (l <= r) {
    int mid = l + (r - l) / 2;
 
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
 
  return -1;
}
 
int main() {
  int arr[5],num,output;
 
  cout << "Please enter 5 elements in ASCENDING order:" << endl;
  for (int i = 0; i < 5; i++) 
  {
    cin >> arr[i];
  }
  cout << "Please enter an element to search for:" << endl;
  cin >> num;
 
  output = binarySearch(arr, 0, 9, num);
 
  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at index: " << output << endl;
  }
 
  return 0;
}
