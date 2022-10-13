#include <iostream>
using namespace std;

int is_prime(int n);

int main()
{

    string num1, num2;
    cout << "Input first number: ";
    cin >> num1;

    for (int i = 0; i < num1.length(); i++)
    {
        if (!isdigit(num1[i]))
        {
            cout << "Entered character is not digit." << endl;
            return 0;
        }
    }

    int first = stoi(num1);

    cout << "Input last number" << endl;
    cin >> num2;

    for (int i = 0; i < num2.length(); i++)
    {
        if (!isdigit(num2[i]))
        {
            cout << "Entered character is not digit." << endl;
            return 0;
        }
    }

    int last = stoi(num2);

    int counter = 0;
    for (int i = first; i < last; i++)
    {
        if (is_prime(i) == 1)
        {
            cout << i << "\n";
            counter++;
        }
    }
    if (counter = 0)
    {
        cout << "There are not prime numbers in this interval" << endl;
    }
    return 0;
}

int is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
