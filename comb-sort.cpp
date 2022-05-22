#include<bits/stdc++.h> 
using namespace std; 

// Tarak sýralama algoritmasý
int Comb_Sort(int arr[], int n) 
{ 
  int gap = n; 

  while (gap != 1) 
  { 
     // boþluðu 1,3 ile böl
    gap = int(gap/1.3); 
    if (gap < 1) 
       gap= 1;

    for (int i=0; i<n-gap; i++) 
    { 
      if (arr[i] > arr[i+gap]) 
        swap(arr[i], arr[i+gap]); 
    } 
  } 
} 

// en kötü durumda O(n^2)
// en iyi durumda  O(n log n)

int main() 
{ 
  int arr[] = {21, 8, 32, 56, 41, 12, 23, 10, 28, 11, 54}; 
  

  int n = sizeof(arr)/sizeof(arr[0]);          

  Comb_Sort(arr, n); 

    std::cout << "Unsorted Array" << std::endl;
    std::cout << "{21, 8, 32, -56, -41, 12, 23, 10, -28, 11, 54}"<< std::endl;
    std::cout << "Sorted Array" << std::endl;
    
  for (int i=0; i<n; i++) 
    std::cout << arr[i] <<" "; 

  return 0; 
} 




