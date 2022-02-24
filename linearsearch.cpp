#include <iostream>
using namespace std;
int elmntSrch(int arr[], int size, int x) {
    int rec;
 
    size--;
 
    if (size >= 0) {
        if (arr[size] == x)
            return size;
        else
            rec = elmntSrch(arr, size, x);
    }
    else
        return -1;
 
    return rec;
}
 
int main(void) {
    int arr[] = {12, 34, 54, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int indx;
 
      indx = elmntSrch(arr, size, x);
 
    if (indx != -1)
        cout << "Element " << x << " is present at index " << indx << endl;
    else
        cout << "Element " << x << " is not present" << endl;
 
    return 0;
}