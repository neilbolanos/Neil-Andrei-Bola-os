#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr1[10], arr2[10], merged[20];
    
    cout << "Enter 10 elements for the first array: ";
    for (int i = 0; i < 10; i++) cin >> arr1[i];
    
    cout << "Enter 10 elements for the second array: ";
    for (int i = 0; i < 10; i++) cin >> arr2[i];
    
    copy(arr1, arr1 + 10, merged);
    copy(arr2, arr2 + 10, merged + 10);
    
    sort(merged, merged + 20, greater<int>());
    
    cout << "Merged array in descending order: ";
    for (int i = 0; i < 20; i++) cout << merged[i] << " ";
    cout << endl;
    
    return 0;
}
