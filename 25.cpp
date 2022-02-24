#include <iostream> 
using namespace std; 
template <class T> 
void bubbleSort(T a[], int n) { 
 for (int i = 0; i < n - 1; i++) 
 for (int j = n - 1; i < j; j--)
 if (a[j] < a[j - 1]) 
 swap(a[j], a[j - 1]); 
} 
  
int main() { 
    cout<<"\n***************************************PROGRAM STARTED *****************************************"<<endl;
    cout<<"________DIVYA SINGH__SECTION -G______200121172__________________________\n"<<endl;
    int n=5 ;
 int integer_a[n] = {10, 50, 30, 40, 20}; 
 
 string string_a[n]={"DEVANSH","PURVI","ARYAN","HIMANI","AMAN"};
 
 cout<<"\n ..............................INTEGER ARRAY ...................................\n";
 bubbleSort<int>(integer_a, n); 
  
 cout << " Sorted array : "; 
 for (int i = 0; i < n; i++) 
 cout << integer_a[i] << " "; 
 cout << endl; 

 cout<<"\n ..............................STRING ARRAY ...................................\n";
  bubbleSort<string>(string_a, n); 
  
 cout << " Sorted array : "; 
 for (int i = 0; i < n; i++) 
 cout << string_a[i] << " "; 
 cout << endl; 

 cout<<"\n***************************************PROGRAM ENDED *****************************************"<<endl;   
 return 0; 
} 
