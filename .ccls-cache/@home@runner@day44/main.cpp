// Write Program to find number of even and odd elements in an array
#include <iostream>
using namespace std;
void even_odd(int arr[], int size) {
  int c = 0, k = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      c++;
    }
    if (arr[i] % 2 == 1) {
      k++;
    }
  }
  cout << "Number of even elements :" << c << endl;
  cout << "Number of odd elements :" << k << endl;
}

int main() {
  // std::cout << "Hello World!\n";
  //  int arr[]={1,3,4,5};
  //  int size=4;
  int size;
  cout << "Enter size of array: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  even_odd(arr, size);
}