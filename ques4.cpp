#include <iostream>
using namespace std;

void printSpiral(int n)
{
    int arr[n][n] = {0};
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n)
    {
        for (int i = left; i <= right; i++)
            arr[top][i] = value++;
        top++;

        for (int i = top; i <= bottom; i++)
            arr[i][right] = value++;
        right--;

        for (int i = right; i >= left; i--)
            arr[bottom][i] = value++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            arr[i][left] = value++;
        left++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the spiral matrix: ";
    cin >> n;

    printSpiral(n);
    return 0;
}