#include <iostream>
using namespace std;

int main()
{

    int n, flag =1 ,nextprime;

    cout << "Enter the no you want to check: ";
    cin >> n;

    if (n <= 1)
    {
        flag = 0;
    }

    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not prime number" << endl;
    }

    if (flag == 0)
    {
        cout << "Factors of " << n << " are ";
        for (int i = 2; i < n - 1; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
        }
    }

    if (flag == 1) {
        
        int nextPrime = n + 1;
        while (true) {
            int isPrime = 1;
            for (int i = 2; i <=nextPrime-1; i++) {
                if (nextPrime % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                cout << "The next prime number is: " << nextPrime << endl;
                break;
            }
            nextPrime++;
        }
    }
}
      