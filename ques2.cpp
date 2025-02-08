#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << "The reverse of the array is: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int largest = INT_MIN, second_largest = INT_MIN;
    int smallest = INT_MAX, second_smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    if (second_largest == INT_MIN) {
        cout << "No second largest element found (all elements may be the same)." << endl;
    }
    else {
        cout << "The second largest number in the array is: " << second_largest << endl;
    }
    if (second_smallest == INT_MAX) {
        cout << "No second smallest element found (all elements may be the same)." << endl;
    }
    else {
        cout << "The second smallest number in the array is: " << second_smallest << endl;
    }
    return 0;
}