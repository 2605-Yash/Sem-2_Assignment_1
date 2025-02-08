#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], i, j;
    cout << "Provide elements for matrix: ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Original Matrix is :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int start = 0;
        int end = 2;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    cout << "Rotated matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}